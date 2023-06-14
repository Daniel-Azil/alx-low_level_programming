#include "main.h"
#include <stdlib.h>
/**
 * generate_array - constructs an array of characters.
 * @size: size of the array.
 * @c: character to be stored.
 * Returns: pointer to the array of characters.
 */

char *create_array(unsigned int size, char c)
{
	char *az;
	unsigned int z;

	if (size == 0)
	{
		return (NULL);
	}

	az = malloc(sizeof(c) * size);

	if (az == NULL)
	{
		return (NULL);
	}

	for (z = 0; z < size; z++)
		az[z] = c;

	return (az);
}
