#include "lists.h"

/**
 * dlistint_len - Initialised the prototype function
 * named dlistint_len.
 * @h: Argument of the function named dlistint_len.
 * Return: returns the integer variable name 'mn_v'
 */
size_t dlistint_len(const dlistint_t *h)
{
	int mn_v;
	mn_v = 0;

	if (h == NULL)
		return (mn_v);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		mn_v++;
		h = h->next;
	}
	return (mn_v);
}
