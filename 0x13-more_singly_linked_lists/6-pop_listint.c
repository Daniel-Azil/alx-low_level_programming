#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Removes content of singly linked list.
 * @head: initialised pointer.
 *
 * Return: returns initialised variable used in the code snippet..
 **/

int pop_listint(listint_t **head)
{
	listint_t *var;
	int var_2;

	if (*head == NULL)
		return (0);

	var = *head;
	*head = var->next;
	var_2 = var->n;
	free(var);
	return (var_2);
}
