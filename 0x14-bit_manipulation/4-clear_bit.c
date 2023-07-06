#include "main.h"

/**
 * clear_bit - The function sets the value 0 of bit indexes.
 * @n: Argument to the function clear_bit with variable type
 * of unsigned long int.
 * @index: Argument to the function clear_bit with variable type
 * of unsigned int for index of bit.
 *
 * Return: Returns -1 or 1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int frth_bin01;

	if (index > 63)
		return (-1);

	frth_bin01 = 1 << index;

	if (*n & frth_bin01)
		*n ^= frth_bin01;

	return (1);
}
