#include "hash_tables.h"

/**
 * hash_table_get - Initialised custom function.
 * @ht: Argument of function parameter's.
 * @key: Argument of function parameter's.
 * Return: returns NULL.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int _var_s;
	hash_node_t *dl_var;

	if (ht == NULL)
		return (NULL);
	if (key == NULL || *key == '\0')
		return (NULL);
	_var_s = key_index((unsigned char *)key, ht->size);
	dl_var = ht->array[_var_s];
	while (dl_var != NULL)
	{
		if (strcmp(dl_var->key, key) == 0)
			return (dl_var->value);
		dl_var = dl_var->next;
	}
	return (NULL);
}
