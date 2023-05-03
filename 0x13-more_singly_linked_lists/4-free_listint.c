#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Free a list.
 * @head: node of list address.
 **/

void free_listint(listint_t *head)
{
	listint_t *ltp1, *ltp2;

	ltp1 = head;
	while (ltp1 != NULL)
	{
		ltp2 = ltp1->next;
		free(ltp1);
		ltp1 = ltp2;
	}
}
