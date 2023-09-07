#include "hash_tables.h"

/**
 * hash_table_delete - Initialised custom function.
 * @ht: Argument to custom function's parameter.
 * Return: The function returns nothing.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int _var_s;
	hash_node_t *dl_var_hn;
	hash_node_t *my_var;

	if (ht == NULL)
		return;
	for (_var_s = 0; _var_s < ht->size; _var_s++)
	{
		dl_var_hn = ht->array[_var_s];
		while ((my_var = dl_var_hn) != NULL)
		{
			dl_var_hn = dl_var_hn->next;
			free(my_var->key);
			free(my_var->value);
			free(my_var);
		}
	}
	free(ht->array);
	free(ht);
}
