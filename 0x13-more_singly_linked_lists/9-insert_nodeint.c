#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - place in new node.
 * @head: node address.
 * @idx: Position of the new node to be placed in.
 * @n: Data of new node.
 * Return: Address of new node.
 **/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *p;
	unsigned int i = 0;

	if (*head == NULL && idx != 0)
		return (NULL);
	if (idx != 0)
	{
	p = *head;
	for (; i < idx - 1 && p != NULL; i++)
		p = p->next;
	if (p == NULL)
		return (NULL);
	}
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	node->next = p->next;
	p->next = node;
	return (node);
}
