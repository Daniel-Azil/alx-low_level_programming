#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - # Insert a new node at the beginning of the linked list.
 * @head: given address of node used in the program.
 * @n: initialised vairiable named n.
 * Return: given address for node used in the program.
 **/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *var;

	var = malloc(sizeof(listint_t));
	if (var == NULL)
	{
		return (NULL);
	}

	var->n = n;
	var->next = *head;
	*head = var;
	return (*head);
}
