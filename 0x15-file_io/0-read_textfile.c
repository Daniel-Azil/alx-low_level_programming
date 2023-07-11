#include <stdio.h>
#include "main.h"

/**
 * read_textfile - The funtion reads text file for displaying in
 * the format or standard of POSIX.
 * @filename: An initialised pointer argument for file name
 * @letters: An initialised variable arguement of numbers of letters.
 * Return: Returns 1 or 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fth_fvar;
	ssize_t nth_read_len;
	char *buffer_pnt;
	ssize_t nth_write_len;

	if (!filename)
		return (0);
	fth_fvar = open(filename, O_RDONLY);
	if (fth_fvar == -1)
		return (0);
	buffer_pnt = malloc(sizeof(char) * letters);
	if (!buffer_pnt)
		return (0);

	nth_read_len = read(fth_fvar, buffer_pnt, letters);
	nth_write_len = write(STDOUT_FILENO, buffer_pnt, nth_read_len);

	close(fth_fvar);
	free(buffer_pnt);
	return (nth_write_len);
}
