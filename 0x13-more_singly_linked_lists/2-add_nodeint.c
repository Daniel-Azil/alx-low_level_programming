#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Add a new node in the beginning of list.
 * @head: Address of node.
 * @n: Int to place into the new node.
 * Return: Address of node.
 **/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ltp;

	ltp = malloc(sizeof(listint_t));
	if (ltp == NULL)
		return (NULL);

	ltp->n = n;
	ltp->next = *head;
	*head = ltp;
	return (*head);
}
