#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Delete element of singly linked list.
 * @head: Pointer.
 * Return: Int if true.
 **/

int pop_listint(listint_t **head)
{
	listint_t *p;
	int data;

	if (*head == NULL)
		return (0);

	p = *head;
	*head = p->next;
	data = p->n;
	free(p);
	return (data);
}
