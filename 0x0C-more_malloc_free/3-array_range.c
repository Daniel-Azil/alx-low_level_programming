#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: min number.
 * @max: max number.
 * Return: returns pointer.
 */
int *array_range(int min, int max)
{
	int *pnt;
	int a;

	if (min > max)
		return (NULL);

	pnt = malloc(sizeof(*pnt) * ((max - min) + 1));

	if (pnt == NULL)
		return (NULL);

	for (a = 0; min <= max; a++, min++)
		pnt[a] = min;

	return (pnt);
}
