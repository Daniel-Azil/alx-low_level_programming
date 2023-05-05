#include "main.h"
/**
 * clear_bit - makes bit value to 0 at certain index
 * @n: pointer of unsigned long int
 * @index: bit index
 * Return: if success (1), else (-1)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int a;

	if (index > 63)
		return (-1);

	a = 1 << index;

	if (*n & a)
		*n ^= a;

	return (1);
}
