#include "lists.h"
#include <stdio.h>

/**
 * print_listint - returns element in list..
 * @h: initialised pointer named az_var.
 *
 * Return: returns var variable initialised in snippet.
 **/

size_t print_listint(const listint_t *h)
{
	const listint_t *az_var;
	unsigned int var1 = 0;

	az_var = h;
	while (az_var)
	{
		printf("%d\n", az_var->n);
		var1++;
		az_var = az_var->next;
	}
	return (var1);
}
