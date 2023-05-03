#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints singly linked list elements.
 * @h: Pointer.
 * Return: returns Int.
 **/

size_t print_listint(const listint_t *h)
{
	const listint_t *cnp;
	unsigned int ui = 0;

	cnp = h;
	while (cnp)
	{
		printf("%d\n", cnp->n);
		ui++;
		cnp = cnp->next;
	}
	return (ui);
}
