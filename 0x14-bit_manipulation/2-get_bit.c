#include "main.h"
/**
 * get_bit - The function returns the bit of the index of each
 * given value.
 * @n: Argument of the integer function get_bit
 * @index: Argument og the funtion for index of bit.
 * Return: Returns the value 0, or n & 1 or -1.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int snd_bin01;

	if (n == 0 && index < 64)
		return (0);
	for (snd_bin01 = 0; snd_bin01 <= 63; n >>= 1, snd_bin01++)
	{
		if (index == snd_bin01)
			return (n & 1);
	}
	return (-1);
}
