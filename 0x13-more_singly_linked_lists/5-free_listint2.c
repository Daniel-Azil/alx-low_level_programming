#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Frees list used in code snippet.
 * @head: address of list node used in code snippet.
 *
 * Returns: code returns nothing.
 **/

void free_listint2(listint_t **head)
{
	listint_t *var;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		var = (*head)->next;
		free(*head);
		*head = var;
	}
}
