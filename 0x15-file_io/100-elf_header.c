#include <sys/types.h>
#include <elf.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

/**
 * _show_address - Function to Print Address
 * @nth_pnt: Argument.
 * Return: Returns nothing.
 */
void _show_address(char *nth_pnt)
{
	int nth_var;
	int nth_start;
	char nth_;

	printf("  Entry point address:               0x");

	nth_ = nth_pnt[4] + '0';
	if (nth_ == '1')
	{
		nth_start = 26;
		printf("80");
		for (nth_var = nth_start; nth_var >= 22; nth_var--)
		{
			if (nth_pnt[nth_var] > 0)
				printf("%x", nth_pnt[nth_var]);
			else if (nth_pnt[nth_var] < 0)
				printf("%x", 256 + nth_pnt[nth_var]);
		}
		if (nth_pnt[7] == 6)
			printf("00");
	}

	if (nth_ == '2')
	{
		nth_start = 26;
		for (nth_var = nth_start; nth_var > 23; nth_var--)
		{
			if (nth_pnt[nth_var] >= 0)
				printf("%02x", nth_pnt[nth_var]);

			else if (nth_pnt[nth_var] < 0)
				printf("%02x", 256 + nth_pnt[nth_var]);

		}
	}
	printf("\n");
}

/**
 * f_tp_display - Custom function.
 * @nth_pnt: argument.
 * Return: Returns nothing.
 */
void f_tp_display(char *nth_pnt)
{
	char nth_tpp = nth_pnt[16];

	if (nth_pnt[5] == 1)
		nth_tpp = nth_pnt[16];
	else
		nth_tpp = nth_pnt[17];

	printf("  Type:                              ");
	if (nth_tpp == 0)
		printf("NONE (No file nth_tpp)\n");
	else if (nth_tpp == 1)
		printf("REL (Relocatable file)\n");
	else if (nth_tpp == 2)
		printf("EXEC (Executable file)\n");
	else if (nth_tpp == 3)
		printf("DYN (Shared object file)\n");
	else if (nth_tpp == 4)
		printf("CORE (Core file)\n");
	else
		printf("<unknown: %x>\n", nth_tpp);
}

/**
 * f_poi - Funtion initialised.
 * @nth_pnt: argument.
 * Return: returns nothing.
 */
void f_poi(char *nth_pnt)
{
	char poi = nth_pnt[7];

	printf("  OS/ABI:                            ");
	if (poi == 0)
		printf("UNIX - System V\n");
	else if (poi == 2)
		printf("UNIX - NetBSD\n");
	else if (poi == 6)
		printf("UNIX - Solaris\n");
	else
		printf("<unknown: %x>\n", poi);

	printf("  ABI Version:                       %d\n", nth_pnt[8]);
}


/**
 * d_vs - function to display version.
 * @nth_pnt: argument.
 * Return: returns nothing.
 */
void d_vs(char *nth_pnt)
{
	int _vs = nth_pnt[6];

	printf("  Version:                           %d", _vs);

	if (_vs == EV_CURRENT)
		printf(" (current)");

	printf("\n");
}
/**
 * view_content - returns content by the function
 * @nth_pnt: argument.
 * Return: returns nothing.
 */
void view_content(char *nth_pnt)
{
	char content = nth_pnt[5];

	printf("  Data:                              2's complement");
	if (content == 1)
		printf(", little endian\n");

	if (content == 2)
		printf(", big endian\n");
}

/**
 * view_cm - returns argument content.
 * @nth_pnt: argument.
 * Return: returns nothing.
 */
void view_cm(char *nth_pnt)
{
	int size_b;

	printf("  Magic:  ");

	for (size_b = 0; size_b < 16; size_b++)
		printf(" %02x", nth_pnt[size_b]);


	printf("\n");

}

/**
 * v_cks - checks for version by function for sys..
 * @nth_pnt: argument.
 * Return: returns nothing.
 */
void v_cks(char *nth_pnt)
{
	char nth_ = nth_pnt[4] + '0';

	if (nth_ == '0')
		exit(98);

	printf("ELF Header:\n");
	view_cm(nth_pnt);

	if (nth_ == '1')
		printf("  Class:                             ELF32\n");

	if (nth_ == '2')
		printf("  Class:                             ELF64\n");

	view_content(nth_pnt);
	d_vs(nth_pnt);
	f_poi(nth_pnt);
	f_tp_display(nth_pnt);
	_show_address(nth_pnt);
}

/**
 * f_cke_ - Fucntion that makes checks
 * @nth_pnt: argument.
 * Return: returns the value 0 or 1.
 */
int f_cke_(char *nth_pnt)
{
	int _nth_locate_ = (int)nth_pnt[0];
	char __nth_var_ = nth_pnt[1];
	char __nth_var1_ = nth_pnt[2];
	char __nth_var2_ = nth_pnt[3];

	if (_nth_locate_ == 127 && __nth_var_ == 'E' && __nth_var1_ == 'L' && __nth_var2_ == 'F')
		return (1);

	return (0);
}

/**
 * main - Main function.
 * @argc: arguments count.
 * @argv: fuunction arguments.
 *
 * Return: It returns 0.
 */
int main(int argc, char *argv[])
{
	int __nth_v_;
	int __nth_v2_;
	char nth_pnt[27];

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		exit(98);
	}

	__nth_v_ = open(argv[1], O_RDONLY);

	if (__nth_v_ < 0)
	{
		dprintf(STDERR_FILENO, "Err: file can not be open\n");
		exit(98);
	}

	lseek(__nth_v_, 0, SEEK_SET);
	__nth_v2_ = read(__nth_v_, nth_pnt, 27);

	if (__nth_v2_ == -1)
	{
		dprintf(STDERR_FILENO, "Err: The file can not be read\n");
		exit(98);
	}

	if (!f_cke_(nth_pnt))
	{
		dprintf(STDERR_FILENO, "Err: It is not an ELF\n");
		exit(98);
	}

	v_cks(nth_pnt);
	close(__nth_v_);

	return (0);
}
