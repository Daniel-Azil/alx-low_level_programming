#include "main.h"

/**
 * create_file - file created
 * @filename: name of file
 * @text_content: file written content.
 * Return: if success return 1 else -1.
 */

int create_file(const char *filename, char *text_content)
{
	int file_dpt;
	int nlt;
	int var_rw;

	if (!filename)
		return (-1);

	file_dpt = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_dpt == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nlt = 0; text_content[nlt]; nlt++)
		;

	var_rw = write(file_dpt, text_content, nlt);

	if (var_rw == -1)
		return (-1);

	close(file_dpt);
	return (1);
}

