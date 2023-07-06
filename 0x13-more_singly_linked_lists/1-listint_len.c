#include "lists.h"

/**
 * listint_len - computate number of contained content.
 * @h: pointer in function argument.
 *
 * Return: initilised varible.
 **/

size_t listint_len(const listint_t *h)
{
	const listint_t *az_var;
	unsigned int var = 0;

	az_var = h;
	while (az_var)
	{
		var++;
		az_var = az_var->next;
	}
	return (var);
}
