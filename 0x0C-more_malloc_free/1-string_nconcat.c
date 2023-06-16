#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: string.
 * @s2: string.
 * @n: bytes.
 * Return: pointer.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int var_1, var_2, str_rlt, az;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (var_1 = 0; s1[var_1] != '\0'; var_1++)
		;

	for (var_2 = 0; s2[var_2] != '\0'; var_2++)
		;

	if (n > var_2)
		n = var_2;

	str_rlt = var_1 + n;

	result = malloc(str_rlt + 1);

	if (result == NULL)
		return (NULL);

	for (az = 0; az < str_rlt; az++)
		if (az < var_1)
			result[az] = s1[az];
		else
			result[az] = s2[az - var_1];

	result[az] = '\0';

	return (result);
}
