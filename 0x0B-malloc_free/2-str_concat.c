#include "main.h"
#include <stdlib.h>

/**
 * str_concat - merges two strings together.
 * @s1: first string.
 * @s2: second string.
 * Return: pointer to the concatenated string.
 */

char *str_concat(char *s1, char *s2)
{
	char *result;
	unsigned int a, z, g, max;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a] != '\0'; a++)
		;

	for (z = 0; s2[z] != '\0'; z++)
		;

	result = malloc(sizeof(char) * (a + z + 1));

	if (result == NULL)
		return (NULL);

	for (g = 0; g < a; g++)
		result[g] = s1[g];

	max = z;
	for (z = 0; z <= max; z++, g++)
		result[g] = s2[z];

	return (result);
}
