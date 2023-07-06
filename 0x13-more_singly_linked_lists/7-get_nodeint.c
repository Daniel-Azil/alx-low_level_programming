#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns the index of node of list used.
 * @head: address of node in list.
 * @index: return node index for the function above.
 * Return: address of node used in the code snippet.
 **/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int var1 = 0;

	if (head == NULL)
		return (NULL);
	for (var1 = 0; var1 < index; var1++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
