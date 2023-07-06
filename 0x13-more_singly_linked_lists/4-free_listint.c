#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees memory of list.
 * @head: adress of node list used in the snippet..
 **/

void free_listint(listint_t *head)
{
	listint_t *var_1, *var_2;

	var_1 = head;
	while (var_1 != NULL)
	{
		var_2 = var_1->next;
		free(var_1);
		var_1 = var_2;
	}
}
