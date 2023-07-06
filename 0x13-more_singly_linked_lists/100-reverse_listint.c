#include "lists.h"

/**
 * reverse_listint - function for linked list reversal.
 * @head: initialised pointer.
 *
 * Return: returns initialised pointer of function argument.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *pnt_1 = NULL;
	listint_t *pnt_2 = NULL;

	while (*head)
	{
		pnt_1 = (*head)->next;
		(*head)->pnt_1 = pnt_2;
		pnt_2 = *head;
		*head = pnt_1;
	}

	*head = pnt_2;

	return (*head);
}
