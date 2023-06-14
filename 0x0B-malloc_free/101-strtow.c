#include <stdlib.h>
#include "main.h"
/**
 * count_word - auxiliary function to determine the word count in a string
 * @s: assess string
 *
 * Return: word numbers
 */

int count_word(char *s)
{
	int indicator, n, j;

	indicator = 0;
	j = 0;

	for (n = 0; s[n] != '\0'; n++)
	{
		if (s[n] == ' ')
			indicator = 0;
		else if (indicator == 0)
		{
			indicator = 1;
			j++;
		}
	}

	return (j);
}
/**
 * **strtow - divides a string into individual words
 * @str: string to be divided
 * Return: pointer to an array of strings (Successful split)
 * or Error during splitting (NULL)
 */
char **strtow(char *str)
{
	char **grid, *t;
	int a, d = 0, length = 0, wd, x = 0, st, e;

	while (*(str + length))
		length++;
	wd = count_word(str);
	if (wd == 0)
		return (NULL);

	grid = (char **) malloc(sizeof(char *) * (wd + 1));
	if (grid == NULL)
		return (NULL);

	for (a = 0; a <= length; a++)
	{
		if (str[a] == ' ' || str[a] == '\0')
		{
			if (x)
			{
				e = a;
				t = (char *) malloc(sizeof(char) * (x + 1));
				if (t == NULL)
					return (NULL);
				while (st < e)
					*t++ = str[st++];
				*t = '\0';
				grid[d] = t - x;
				d++;
				x = 0;
			}
		}
		else if (x++ == 0)
			st = a;
	}

	grid[d] = NULL;

	return (grid);
}
