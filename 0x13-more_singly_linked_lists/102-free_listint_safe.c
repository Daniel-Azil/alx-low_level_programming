#include "lists.h"
#include <stdio.h>
/**
 * free_listint_safe - frees link list used in the snippet.
 * @h: function initialised pointer.
 *
 * Return: vriable of the function struct named size..
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	int var_1;
	listint_t *lint_pnt;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		var_1 = *h - (*h)->next;
		if (var_1 > 0)
		{
			lint_pnt = (*h)->next;
			*h = lint_pnt;
			size++;
		}
		else
		{
			*h = NULL;
			size++;
			break;
		}
	}

	*h = NULL;

	return (size);
}
