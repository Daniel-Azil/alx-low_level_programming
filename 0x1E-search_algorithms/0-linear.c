#include "search_algos.h"
/**
  * linear_search - A custom function that utilizes linear search
  * algorithm to search for given arrays of intgers.
  * @array: first initialised pointer.
  * @size: second initialised pointer.
  * @value: target value to search for in the array.
  * Return: Returns the index of the target value or -1 if not found.
  */
int linear_search(int *array, size_t size, int value)
{
	size_t index = 0;

	while (index < size)
	{
		printf("Value checked array[%lu] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
		index++;
	}

	return (-1);
}