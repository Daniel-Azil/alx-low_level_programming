#include "main.h"

/**
 * get_endianness - Function named get_endianness
 *
 * Return: returns 0 or 1.
 */
int get_endianness(void)
{
	char *sth_bin01;
	unsigned int sth_bin02;

	sth_bin02 = 1;
	sth_bin01 = (char *) &sth_bin02;

	return ((int)*sth_bin01);
}
