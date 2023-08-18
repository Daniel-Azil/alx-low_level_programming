#include "lists.h"

/**
 * add_dnodeint_end - initialised a prototype function named
 * add_dnodeint_end
 * @head: Argument of the function named add_dnodeint_end.
 * @n: Argument of the function named add_dnodeint_end.
 * Return: Returns the variable named az_dl1
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *az_dl1, *az_dl2;
	az_dl1 = malloc(sizeof(dlistint_t));
	if (az_dl1 == NULL)
		return (NULL);
	az_dl1->n = n;
	az_dl1->next = NULL;
	az_dl2 = *head;
	if (az_dl2 != NULL)
	{
		while (az_dl2->next != NULL)
			az_dl2 = az_dl2->next;
		az_dl2->next = az_dl1;
	}
	else
	{
		*head = az_dl1;
	}
	az_dl1->prev = az_dl2;
	return (az_dl1);
}
