#include "lists.h"

/**
 * add_dnodeint - Initialised a function named add_dnodeint
 * @head: Argument of the function named add_dnodeint
 * @n: Argument of the function named add_dnodeint
 * Return: Returns the dlistint_t variable name az_dl1
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *az_dl1, *az_dl2;
	az_dl1 = malloc(sizeof(dlistint_t));
	if (az_dl1 == NULL)
		return (NULL);
	az_dl1->n = n;
	az_dl1->prev = NULL;
	az_dl2 = *head;
	if (az_dl2 != NULL)
	{
		while (az_dl2->prev != NULL)
			az_dl2 = az_dl2->prev;
	}
	az_dl1->next = az_dl2;
	if (az_dl2 != NULL)
		az_dl2->prev = az_dl1;
	*head = az_dl1;
	return (az_dl1);
}
