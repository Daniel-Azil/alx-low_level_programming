#include "main.h"
/**
 * flip_bits - The function returns bit value for given
 * input.
 * @n: Arguemnt of the given function of variable type
 * unsigned long int.
 * @m: Argument of the given function of variable type
 * unsigned long int.
 * Return: returns the variable fth_bin01.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int fth_bin01;

	for (fth_bin01 = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			fth_bin01++;
	}

	return (fth_bin01);
}
