#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a pointer to a 2D array of integers.
 * @width: width of the array.
 * @height: height of the array.
 * Return: pointer to the 2D array of integers.
 */

int **alloc_grid(int width, int height)
{
	int **arrayptr;
	int a, z;

	if (width < 1 || height < 1)
		return (NULL);

	arrayptr = malloc(height * sizeof(int *));
	if (arrayptr == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		arrayptr[a] = malloc(width * sizeof(int));
		if (arrayptr[a] == NULL)
		{
			for (a--; a >= 0; a--)
				free(arrayptr[a]);
			free(arrayptr);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
		for (z = 0; z < width; z++)
			arrayptr[a][z] = 0;

	return (arrayptr);
}
