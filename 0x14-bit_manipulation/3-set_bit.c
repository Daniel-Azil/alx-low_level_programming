#include "main.h"
/**
 * set_bit - sets bit value as 1 in certain indexes
 * @n: pointer of unsigned long int
 * @index: bit index
 * Return: if success (1), else (-1)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int a;

	if (index > 63)
		return (-1);

	a = 1 << index;
	*n = (*n | a);

	return (1);
}
