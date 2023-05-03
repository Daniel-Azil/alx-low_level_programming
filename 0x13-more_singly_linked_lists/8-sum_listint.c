#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - adds all data in a list.
 * @head: node of a list address.
 * Return: Int.
 **/

int sum_listint(listint_t *head)
{
	int summed_total = 0;

	while (head != NULL)
	{
		summed_total += head->n;
		head = head->next;
	}
	return (summed_total);
}
