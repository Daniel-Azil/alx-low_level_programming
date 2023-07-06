#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - summation of list data.
 * @head: addres of node list.
 * Return: returns initialised variable used.
 **/

int sum_listint(listint_t *head)
{
	int d_summation = 0;

	while (head != NULL)
	{
		d_summation += head->n;
		head = head->next;
	}
	return (d_summation);
}
