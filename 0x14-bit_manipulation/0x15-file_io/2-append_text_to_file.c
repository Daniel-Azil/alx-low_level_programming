#include "main.h"

/**
 * append_text_to_file - The function adds given tex or
 * append it to the end of a given file.
 * @filename: initialised pointer in function argument.
 * @text_content: initialised another pointer in function
 * argument.
 *
 * Return: It returns -1 or 1.
 */
int append_text_to_file(const char *filename, char *text_content)

{
	int file_dpt;
	int nlt;
	int var_wr;

	if (!filename)
		return (-1);

	file_dpt = open(filename, O_WRONLY | O_APPEND);

	if (file_dpt == -1)
		return (-1);

	if (text_content)
	{
		for (nlt = 0; text_content[nlt]; nlt++)
			;
		var_wr = write(file_dpt, text_content, nlt);

		if (var_wr == -1)
			return (-1);
	}
	close(file_dpt);
	return (1);
}

