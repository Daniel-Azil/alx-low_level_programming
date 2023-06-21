#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for ALX students.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	char *pnt = (char *) main;
	int var, bty;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bty = atoi(argv[1]);

	if (bty < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (var = 0; var < bty; var++)
	{
		printf("%02x", pnt[var] & 0xFF);
		if (var != bty - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
