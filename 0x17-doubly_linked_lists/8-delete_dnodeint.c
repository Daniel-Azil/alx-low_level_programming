#include "lists.h"
/**
 * delete_dnodeint_at_index - Initialised custom function
 * @head: Argument of the custom function
 * @index: Argument of the custom function
 * Return: returns 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *az_pnto, *az_pntt;
	unsigned int _uint_var;

	az_pnto = *head;

	if (az_pnto != NULL)
		while (az_pnto->prev != NULL)
			az_pnto = az_pnto->prev;
	_uint_var = 0;
	while (az_pnto != NULL)
	{
		if (_uint_var == index)
		{
			if (_uint_var == 0)
			{
				*head = az_pnto->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				az_pntt->next = az_pnto->next;

				if (az_pnto->next != NULL)
					az_pnto->next->prev = az_pntt;
			}
			free(az_pnto);
			return (1);
		}
		az_pntt = az_pnto;
		az_pnto = az_pnto->next;
		_uint_var++;
	}
	return (-1);
}
