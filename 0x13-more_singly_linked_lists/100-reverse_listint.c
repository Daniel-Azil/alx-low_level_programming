#include "lists.h"

/**
 * reverse_listint - reverses linked list
 * @head: pointer
 * Return: pointer to node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *p = NULL;
	listint_t *n = NULL;

	while (*head)
	{
		n = (*head)->next;
		(*head)->n = p;
		p = *head;
		*head = n;
	}

	*head = p;

	return (*head);
}
