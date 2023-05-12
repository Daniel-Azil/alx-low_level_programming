#include "main.h"

/**
 * append_text_to_file - iin file, appends text to the end of it
 * @filename: name fo file
 * @text_content: content added
 * Return: 1 if success else returns -1
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

