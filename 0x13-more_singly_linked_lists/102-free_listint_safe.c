#include "lists.h"
#include <stdio.h>
/**
 * free_listint_safe - frees linked list
 * @h: pointer
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t lenght = 0;
	int dif;
	listint_t *p;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		dif = *h - (*h)->next;
		if (dif > 0)
		{
			p = (*h)->next;
			*h = p;
			lenght++;
		}
		else
		{
			*h = NULL;
			lenght++;
			break;
		}
	}

	*h = NULL;

	return (lenght);
}
