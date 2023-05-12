#include <stdio.h>
#include "main.h"

/**
 * error_file - checks whether a file can or cannot be opened.
 * @file_from: file origin.
 * @file_to: file destination.
 * @argv: argument vector.
 * Return: returns nothing.
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
 * main - main function.
 * @argc: number of arg(arguments).
 * @argv: argument vector.
 * Return: returns 0.
 */

int main(int argc, char *argv[])
{
	int var_ff, var_ft, var_errcl;
	ssize_t var_nchr, var_wr;
	char var_buf[4096];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	var_ff = open(argv[1], O_RDONLY);
	var_ft = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(var_ff, var_ft, argv);

	var_nchr = 4096;
	while (var_nchr == 4096)
	{
		var_nchr = read(var_ff, var_buf, 4096);
		if (var_nchr == -1)
			error_file(-1, 0, argv);
		var_wr = write(var_ft, var_buf, var_nchr);
		if (var_wr == -1)
			error_file(0, -1, argv);
	}

	var_errcl = close(var_ff);
	if (var_errcl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", var_ff);
		exit(100);
	}

	var_errcl = close(var_ft);
	if (var_errcl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", var_ff);
		exit(100);
	}
	return (0);
}
