#include "hash_tables.h"

/**
 * hash_djb2 - initialised function named hash_djb2.
 * @str: Argument of the initialised function.
 * Return: Returns the var named dl_var_ht
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int dl_var_ht;
	int dl_var;

	dl_var_ht = 5381;

	while ((dl_var = *str++))
	{
		dl_var_ht = ((dl_var_ht << 5) + dl_var_ht) + dl_var;
	}
	return (dl_var_ht);
}
