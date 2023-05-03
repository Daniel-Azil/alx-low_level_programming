#include "lists.h"

/**
 * listint_len - Calculate number of elements.
 * @h: Pointer.
 * Return: Int.
 **/

size_t listint_len(const listint_t *h)
{
	const listint_t *cnp;
	unsigned int ui = 0;

	cnp = h;
	while (cnp)
	{
		ui++;
		cnp = cnp->next;
	}
	return (ui);
}
