#include "hash_tables.h"

/**
 * key_index - Initialed custom function
 * @key: Argument to the custom function
 * @size: Argumetn to the custom function
 * Return: returns the given index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (key == NULL || size == 0)
		return (0);
	return (hash_djb2(key) % size);
}
