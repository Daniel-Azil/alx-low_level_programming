#include "lists.h"

/**
 * free_dlistint - Initialised a custom function
 * @head: Argument of the custom function
 * Return: The function return nothing
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *az_dlpnt;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;
	while ((az_dlpnt = head) != NULL)
	{
		head = head->next;
		free(az_dlpnt);
	}
}
