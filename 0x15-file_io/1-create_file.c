#include "main.h"

/**
 * create_file - A function that creates file.
 * @filename: Argument pointer for file name.
 * @text_content: Argument pointer to write content in file.
 * Return: Returns -1 or 1.
 */
int create_file(const char *filename, char *text_content)
{
	int fth_file_var;
	int snd_intvar;
	int thd_readWrite;

	if (!filename)
		return (-1);

	fth_file_var = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fth_file_var == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (snd_intvar = 0; text_content[snd_intvar]; snd_intvar++)
		;

	thd_readWrite = write(fth_file_var, text_content, snd_intvar);

	if (thd_readWrite == -1)
		return (-1);

	close(fth_file_var);
	return (1);
}

