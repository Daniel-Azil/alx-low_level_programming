#include "hash_tables.h"

/**
 * hash_table_set - Initialised custom function
 * @ht: Argument of the custom function
 * @key: Argument of the custom function
 * @value: Argument of the custom function
 * Return: return the value of 0 or 1
 */
int
hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int dl_var_size = 0;
	hash_node_t *dl_var = NULL;
	hash_node_t *dl_var2 = NULL;

	if (!ht || !key || !(*key) || !value)
		return (0);
	dl_var_size = key_index((unsigned char *)key, ht->size);
	dl_var2 = ht->array[dl_var_size];
	while (dl_var2 && strcmp(dl_var2->key, key) != 0)
		dl_var2 = dl_var2->next;
	if (dl_var2)
	{
		free(dl_var2->value);
		dl_var2->value = strdup(value);
		return (1);
	}
	dl_var = malloc(sizeof(*dl_var));
	if (!dl_var)
		return (0);

	dl_var->key = strdup(key);
	dl_var->value = strdup(value);

	dl_var->next = ht->array[dl_var_size];
	ht->array[dl_var_size] = dl_var;

	return (1);
}
