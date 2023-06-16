#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - memory allocation.
 * @b: bytes.
 * Return: allocated memory pointer with status value of 98.
 */
void *malloc_checked(unsigned int b)
{
	char *var;

	var = malloc(b);
	if (var == NULL)
		exit(98);
	return (var);
}
