#include "main.h"
#include <stdlib.h>
/**
 * _strdup - creates a duplicate of a string in newly allocated memory.
 * @str: input string.
 * Return: pointer to the duplicated string.
 */

char *_strdup(char *str)
{
	char *result;
	unsigned int a, z;

	if (str == NULL)
		return (NULL);

	for (a = 0; str[a] != '\0'; a++)
		;

	result = (char *)malloc(sizeof(char) * (a + 1));

	if (result == NULL)
		return (NULL);

	for (z = 0; z <= a; z++)
		result[z] = str[z];

	return (result);
}
