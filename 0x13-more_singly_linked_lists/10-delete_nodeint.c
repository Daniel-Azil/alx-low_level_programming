#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - remove used node in code.
 * @head: address of node used.
 * @index: remove node.
 * Return: returns the value 1.
 **/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int var_;
	listint_t *pnt_lt;
	listint_t *az_n;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		az_n = (*head)->az_n;
		free(*head);
		*head = az_n;
		return (1);
	}
	pnt_lt = *head;
	for (var_ = 0; var_ < index - 1; var_++)
	{
		if (pnt_lt->az_n == NULL)
			return (-1);
		pnt_lt = pnt_lt->az_n;
	}
	az_n = pnt_lt->az_n;
	pnt_lt->az_n = az_n->az_n;
	free(az_n);
	return (1);
}
