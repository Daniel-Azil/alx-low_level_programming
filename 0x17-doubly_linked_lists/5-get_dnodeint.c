#include "lists.h"

/**
 * get_dnodeint_at_index - 
 * @head: Argument of the custom function
 * @index: Argument of the custom function
 * Return: returns the function argument named head
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int _uint_var;
	if (head == NULL)
		return (NULL);
	while (head->prev != NULL)
		head = head->prev;
	_uint_var = 0;
	while (head != NULL)
	{
		if (_uint_var == index)
			break;
		head = head->next;
		_uint_var++;
	}
	return (head);
}
