#include "hash_tables.h"

/**
 * hash_table_create - Custom function created
 *
 * @size: Argument to function.
 * Return: Return NULL or my_var
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *my_var;
	hash_node_t **my_var2;
	unsigned long int _var_s;

	my_var = malloc(sizeof(hash_table_t));
	if (my_var == NULL)
		return (NULL);

	my_var2 = malloc(sizeof(hash_node_t *) * size);
	if (my_var2 == NULL)
		return (NULL);

	for (_var_s = 0; _var_s < size; _var_s++)
		my_var2[_var_s] = NULL;

	my_var->my_var2 = my_var2;
	my_var->size = size;

	return (my_var);
}
