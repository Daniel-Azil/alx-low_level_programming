#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - searchs node in list.
 * @head: node in list address.
 * @index: index of searched node.
 * Return: address of node.
 **/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;

	if (head == NULL)
		return (NULL);
	for (a = 0; a < index; a++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
