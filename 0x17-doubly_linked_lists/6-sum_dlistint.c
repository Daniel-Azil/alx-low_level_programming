#include "lists.h"
/**
 * sum_dlistint - Initialised a custom function
 * @head: Argument of the custom function
 * Return: Returns an initialised integer named dkw
 */
int sum_dlistint(dlistint_t *head)
{
	int dkw;
	dkw = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
		while (head != NULL)
		{
			dkw += head->n;
			head = head->next;
		}
	}
	return (dkw);
}
