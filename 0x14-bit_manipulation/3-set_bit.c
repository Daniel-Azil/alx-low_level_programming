#include "main.h"

/**
 * set_bit - The function initialises values of some indexes
 * of bit as 1.
 * @n: Argument of the function set_bit of the viriable type
 * unsigned long int.
 * @index: Argument of the function set_bit of the viriable type
 * unsigned int.
 *
 * Return: Returns -1 or 1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int thd_bin01;

	if (index > 63)
		return (-1);

	thd_bin01 = 1 << index;
	*n = (*n | thd_bin01);

	return (1);
}
