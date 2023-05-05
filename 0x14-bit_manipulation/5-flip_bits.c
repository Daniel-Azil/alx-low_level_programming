#include "main.h"
/**
 * flip_bits - returns value of bit
 * @n: number one
 * @m: number two
 * Return: bit numbers
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits_num;

	for (bits_num = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			bits_num++;
	}

	return (bits_num);
}
