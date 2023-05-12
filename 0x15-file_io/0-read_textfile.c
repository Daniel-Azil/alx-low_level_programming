#include <stdio.h>
#include "main.h"

/**
 * read_textfile - reads a text file and display to POSIX standard output
 * @filename: file name
 * @letters: numbers of letters that should be displayed
 * Return: 1 if success else return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_dpt;
	ssize_t size_rd, size_wr;
	char *pointer_buf;

	if (!filename)
		return (0);
	file_dpt = open(filename, O_RDONLY);
	if (file_dpt == -1)
		return (0);
	pointer_buf = malloc(sizeof(char) * letters);
	if (!pointer_buf)
		return (0);

	size_rd = read(file_dpt, pointer_buf, letters);
	size_wr = write(STDOUT_FILENO, pointer_buf, size_rd);

	close(file_dpt);

	free(pointer_buf);

	return (size_wr);
}
