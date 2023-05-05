#include "main.h"

/**
 * binary_to_uint - binary number to unsigned int
 * @b: binary number in strings
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int dv = 0;

	if (!b)
		return (0);

	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		dv = 2 * dv + (b[a] - '0');
	}

	return (dv);
}
