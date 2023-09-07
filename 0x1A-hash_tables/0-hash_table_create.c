#include "hash_tables.h"

/**
 * hash_table_create - Initialised function named
 *                     hash_table_create.
 * @size: Argument of the initialised function
 * Return: Returns variable named my_var1
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *my_var1;
	hash_node_t **my_var2;
	unsigned long int my_var3;

	my_var1 = malloc(sizeof(hash_table_t));
	if (my_var1 == NULL)
		return (NULL);
	my_var2 = malloc(sizeof(hash_node_t *) * size);
	if (my_var2 == NULL)
		return (NULL);
	for (my_var3 = 0; my_var3 < size; my_var3++)
		my_var2[my_var3] = NULL;
	my_var1->my_var2 = my_var2;
	my_var1->size = size;
	return (my_var1);
}
