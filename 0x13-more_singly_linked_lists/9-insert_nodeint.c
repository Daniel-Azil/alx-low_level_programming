#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - insert new node in code snippet.
 * @head: address of node used in the code.
 * @idx: new node position or index.
 * @n: new node data (new node).
 *
 * Return: returns the address of new pnt_2 in code snippet.
 **/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int var = 0;
	listint_t *pnt_1;
	listint_t *pnt_2;

	if (*head == NULL && idx != 0)
		return (NULL);
	if (idx != 0)
	{
	pnt_1 = *head;
	for (; var < idx - 1 && pnt_1 != NULL; var++)
		pnt_1 = pnt_1->next;
	if (pnt_1 == NULL)
		return (NULL);
	}
	pnt_2 = malloc(sizeof(listint_t));
	if (pnt_2 == NULL)
		return (NULL);
	pnt_2->n = n;
	if (idx == 0)
	{
		pnt_2->next = *head;
		*head = pnt_2;
		return (pnt_2);
	}
	pnt_2->next = pnt_1->next;
	pnt_1->next = pnt_2;
	return (pnt_2);
}
