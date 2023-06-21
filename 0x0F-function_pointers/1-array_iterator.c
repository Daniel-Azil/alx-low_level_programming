#include "function_pointers.h"

/**
 * array_iterator - function.
 * parameter array element.
 * @array: array integer.
 * @size: array size.
 * @action: pointer.
 * Return: Returns nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int var;

	if (array && action)
		for (var = 0; var < size; var++)
			action(array[var]);
}
