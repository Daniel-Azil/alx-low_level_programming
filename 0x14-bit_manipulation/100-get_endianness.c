#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: if big endian (0), else (1) if little
 */
int get_endianness(void)
{
	unsigned int ui;
	char *p;

	ui = 1;
	p = (char *) &ui;

	return ((int)*p);
}
