#include <stdio.h>
#include "main.h"

/**
 * error_file - The function inspects if a file can bo
 * opened or not.
 * @file_from: A function argument of an integer type.
 * @file_to: A function argument of an integer type.
 * @argv: Function argument.
 * Return: The funcion does not return anything..
 */
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - The main function of the source code.
 * @argc: Initialised an argument count.
 * @argv: Function argument.
 * Return: The function returns 0.
 */

int main(int argc, char *argv[])
{
	int fth_int, ffth_int, sth_int;
	ssize_t str_v, readWrite;
	char ch_buffer[4096];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	fth_int = open(argv[1], O_RDONLY);
	ffth_int = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(fth_int, ffth_int, argv);

	str_v = 4096;
	while (str_v == 4096)
	{
		str_v = read(fth_int, ch_buffer, 4096);
		if (str_v == -1)
			error_file(-1, 0, argv);
		readWrite = write(ffth_int, ch_buffer, str_v);
		if (readWrite == -1)
			error_file(0, -1, argv);
	}

	sth_int = close(fth_int);
	if (sth_int == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fth_int);
		exit(100);
	}

	sth_int = close(ffth_int);
	if (sth_int == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fth_int);
		exit(100);
	}
	return (0);
}
