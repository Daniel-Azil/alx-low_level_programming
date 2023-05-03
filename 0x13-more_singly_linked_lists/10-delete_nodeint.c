#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Delete a node.
 * @head: node address.
 * @index: node to be deleted.
 * Return: If success (1).
 **/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int ii;
	listint_t *c, *next;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	c = *head;
	for (ii = 0; ii < index - 1; ii++)
	{
		if (c->next == NULL)
			return (-1);
		c = c->next;
	}
	next = c->next;
	c->next = next->next;
	free(next);
	return (1);
}
