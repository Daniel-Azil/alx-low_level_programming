#include "main.h"
#include <stdlib.h>
/**
 * argstostr - joins together all the parameters of a program.
 * @ac: count of arguments.
 * @av: argument array.
 *
 * Return: pointer to an array of characters.
 */

char *argstostr(int ac, char **av)
{
	char *result;
	int n, a, z, az;

	if (ac == 0)
		return (NULL);

	for (n = a = 0; a < ac; a++)
	{
		if (av[a] == NULL)
			return (NULL);

		for (z = 0; av[a][z] != '\0'; z++)
			n++;
		n++;
	}

	result = malloc((n + 1) * sizeof(char));

	if (result == NULL)
	{
		free(result);
		return (NULL);
	}

	for (a = z = az = 0; az < n; z++, az++)
	{
		if (av[a][z] == '\0')
		{
			result[az] = '\n';
			a++;
			az++;
			z = 0;
		}
		if (az < n - 1)
			result[az] = av[a][z];
	}
	result[az] = '\0';

	return (result);
}
