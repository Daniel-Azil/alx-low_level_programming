#include "function_pointers.h"

/**
 * int_index - function.
 * @array: array input.
 * @size: array size.
 * @cmp: pointer.
 * Return: If size <= 0, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int var;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (var = 0; var < size; var++)
			if (cmp(array[var]))
				return (var);
	}

	return (-1);
}
