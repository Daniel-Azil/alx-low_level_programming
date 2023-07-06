#include "lists.h"

/**
 * find_listint_loop - function that searches for linked list loop.
 * @head: argument in state of the linked list to search for.
 *
 * Return: Returns the character NULL for the function.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *pnt_1 = head;
	listint_t *pnt_2 = head;

	if (!head)
		return (NULL);

	while (pnt_1 && pnt_2 && pnt_2->next)
	{
		pnt_2 = pnt_2->next->next;
		pnt_1 = pnt_1->next;
		if (pnt_2 == pnt_1)
		{
			pnt_1 = head;
			while (pnt_1 != pnt_2)
			{
				pnt_1 = pnt_1->next;
				pnt_2 = pnt_2->next;
			}
			return (pnt_2);
		}
	}

	return (NULL);
}
