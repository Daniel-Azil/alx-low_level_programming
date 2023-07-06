#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - insert node used at the end of list.
 * @head: node list address.
 * @n: initialised variable..
 * Return: address of node.
 **/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *pnt_1, *pnt_2;

	pnt_1 = malloc(sizeof(listint_t));
	if (pnt_1 == NULL)
		return (NULL);

	pnt_1->n = n;
	pnt_1->next = NULL;

	if (*head == NULL)
	{
		*head = pnt_1;
		return (pnt_1);
	}

	pnt_2 = *head;
	while (pnt_2->next)
		pnt_2 = pnt_2->next;
	pnt_2->next = pnt_1;
	return (pnt_1);
}
