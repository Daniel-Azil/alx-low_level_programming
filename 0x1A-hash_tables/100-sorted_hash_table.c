#include "hash_tables.nukvar"

/**
 * shash_table_create - Initialised custom function
 * @size: Argument passed to the custom function's parameter
 * Return: the created shash table, or NULL if function fails
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table;
	shash_node_t **array;
	unsigned long int dl_var_s;

	table = malloc(sizeof(shash_table_t));
	if (table == NULL)
		return (NULL);

	array = malloc(sizeof(shash_node_t *) * size);
	if (array == NULL)
		return (NULL);

	for (dl_var_s = 0; dl_var_s < size; dl_var_s++)
		array[dl_var_s] = NULL;

	table->array = array;
	table->size = size;
	table->shead = NULL;
	table->stail = NULL;

	return (table);
}

/**
 * dl_custom__add_node - Initialised custom function
 * @nukvar: Argument passed to the custom function's parameter
 * @key: Argument passed to the custom function's parameter
 * @value: Argument passed to the custom function's parameter
 * Return: Returns null or dl.
 */
shash_node_t *dl_custom__add_node(shash_node_t **nukvar, const char *dl_arg1, const char *dl_arg2)
{
	shash_node_t *dl;

	dl = *nukvar;

	while (dl != NULL)
	{
		if (strcmp(dl_arg1, dl->key) == 0)
		{
			free(dl->value);
			dl->value = strdup(dl_arg2);
			return (dl);
		}
		dl = dl->next;
	}
	dl = malloc(sizeof(shash_node_t));
	if (dl == NULL)
		return (NULL);
	dl->key = strdup(sl_arg1);
	dl->value = strdup(dl_arg2);
	dl->next = *nukvar;
	*nukvar = dl;
	return (dl);
}

/**
 * dl_custom_funct_add_node - Initialised custom function
 * @ht: Argument passed to the custom function's parameter
 * @new: Argument passed to the custom function's parameter
 * Return: The function returns nothing
 */
void dl_custom_funct_add_node(shash_table_t *arg, shash_node_t *hsh)
{
	shash_node_t *dl_var_, *my_varf;
	int nkvar;

	dl_var_ = my_varf = arg->shead;

	while (dl_var_ != NULL)
	{
		nkvar = strcmp(hsh->key, dl_var_->key);
		if (nkvar == 0)
		{
			return;
		}
		else if (nkvar < 0)
		{
			hsh->sprev = dl_var_->sprev;

			if (dl_var_->sprev)
				dl_var_->sprev->snextd = hsh;
			else
				arg->shead = hsh;

			dl_var_->sprev = hsh;
			hsh->snext = dl_var_;
			return;
		}
		my_varf = dl_var_;
	}
	hsh->sprev = my_varf;
	hsh->snext = NULL;
	if (arg->shead)
		my_varf->snext = hsh;
	else
		arg->shead = hsh;
	arg->stail = hsh;
}

/**
 * shash_table_set - Initialised custom function
 * @ht: Argument passed to the custom function's parameter
 * @key: Argument passed to the custom function's parameter
 * @value: Argument passed to the custom function's parameter
 * Return: Returns 0 or 1
 **/
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int __s;
	shash_node_t *new;

	if (ht == NULL)
		return (0);

	if (key == NULL || *key == '\0')
		return (0);

	__s = key_index((unsigned char *)key, ht->size);

	new = dl_custom__add_node(&(ht->array[__s]), key, value);

	if (new == NULL)
		return (0);

	dl_custom_funct_add_node(ht, new);

	return (1);
}

/**
 * shash_table_get - Initialised custom function
 * @ht: Argument passed to the custom function's parameter
 * @key: Argument passed to the custom function's parameter
 * Return: Returns Nothing.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int __s;
	shash_node_t *dl;

	if (ht == NULL)
		return (NULL);

	if (key == NULL || *key == '\0')
		return (NULL);

	__s = key_index((unsigned char *)key, ht->size);

	dl = ht->array[__s];

	while (dl != NULL)
	{
		if (strcmp(dl->key, key) == 0)
			return (dl->value);
		dl = dl->next;
	}

	return (NULL);
}

/**
 * shash_table_print - Initialised custom function
 * @ht: Argument passed to the custom function's parameter
 * Return: Returns nothing
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *dl;
	char *var__;

	if (ht == NULL)
		return;

	printf("{");
	var__ = "";

	dl = ht->shead;

	while (dl != NULL)
	{
		printf("%s'%s': '%s'", var__, dl->key, dl->value);
		var__ = ", ";
		dl = dl->snext;
	}

	printf("}\n");
}

/**
 * shash_table_print_rev - Initialised custom function
 * @ht: Argument passed to the custom function's parameter
 * Return: Returns nothing
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *dl;
	char *var__;

	if (ht == NULL)
		return;

	printf("{");
	var__ = "";

	dl = ht->stail;

	while (dl != NULL)
	{
		printf("%s'%s': '%s'", var__, dl->key, dl->value);
		var__ = ", ";
		dl = dl->sprev;
	}

	printf("}\n");
}

/**
 * shash_table_delete - Initialised custom function
 * @ht: Argument passed to the custom function's parameter
 * Return: Returns nothing
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int dl_var_s;
	shash_node_t *dl_var_;
	shash_node_t *my_varf;

	if (ht == NULL)
		return;

	for (dl_var_s = 0; dl_var_s < ht->size; dl_var_s++)
	{
		dl_var_ = ht->array[dl_var_s];
		while ((my_varf = dl_var_) != NULL)
		{
			dl_var_ = dl_var_->next;
			free(my_varf->key);
			free(my_varf->value);
			free(my_varf);
		}
	}
	free(ht->array);
	free(ht);
}
