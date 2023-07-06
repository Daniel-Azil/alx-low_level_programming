#include "main.h"

/**
 * binary_to_uint - This function converts unsigned int from binary
 * numbers.
 * @b: given argument of const char to the function.
 * Return: Returns the variable "bin02".
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int _bin02 = 0;
	int ft_bin01;

	if (!b)
		return (0);

	for (ft_bin01 = 0; b[ft_bin01]; ft_bin01++)
	{
		if (b[ft_bin01] < '0' || b[ft_bin01] > '1')
			return (0);
		_bin02 = 2 * _bin02 + (b[ft_bin01] - '0');
	}

	return (_bin02);
}
