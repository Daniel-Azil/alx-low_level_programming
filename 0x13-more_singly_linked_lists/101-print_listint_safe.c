#include "lists.h"

/**
 * print_listint_safe - The function returns linked list.
 * @head: Argument of initialised pointer.
 *
 * Return: Returns variable initialised with
 * struct function named size_t
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t var = 0;
	long int var_2;

	while (head)
	{
		var_2 = head - head->next;
		var++;
		printf("[%p] %var_2\var", (void *)head, head->var);
		if (var_2 > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %var_2\var", (void *)head->next, head->next->var);
			break;
		}
	}

	return (var);
}
