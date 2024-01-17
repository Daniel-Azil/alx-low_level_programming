#include "search_algos.h"
/**
  * binary_search - A custom function that utilizes binary search
  * algorithm to get the index of given value target.
  * @array: Pointer pointing to the starting index of the array.
  * @size: The total length of the array.
  * @value: The target value to search for.
  * Return: Returns the index of the given value, else -1 if not
  * found.
  */
int binary_search(int *array, size_t size, int value)
{
	size_t first_pnt, second_pnt, array_index = 0;
	int mid_pnt;

	if (array == NULL)
		return (-1);

	second_pnt = size - 1;

	while (array_index <= second_pnt)
	{
		printf("Searching in array: ");

		for (first_pnt = array_index; first_pnt <= second_pnt; first_pnt++)
		{
			printf("%d", array[first_pnt]);
			if (first_pnt != second_pnt)
				printf(", ");
			else
				printf("\n");
		}
		mid_pnt = (array_index + second_pnt) / 2;

		if (array[mid_pnt] < value)
			array_index = mid_pnt + 1;
		else if (array[mid_pnt] > value)
			second_pnt = mid_pnt - 1;
		else
			return (mid_pnt);
	}
	return (-1);
}
