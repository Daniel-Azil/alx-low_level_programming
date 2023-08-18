#include "lists.h"

/**
 * print_dlistint - Initialised a function named print_dlistint
 * @h: Argument of the initialised function.
 * Return: Returns the variable inteher named 'az_var'
 */
size_t print_dlistint(const dlistint_t *h)
{
	int az_var;
	az_var = 0;
	if (h == NULL)
		return (az_var);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		az_var++;
		h = h->next;
	}
	return (az_var);
}
