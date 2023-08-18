#include "lists.h"
/**
 * insert_dnodeint_at_index - Initialised a custom function
 * @h: Argument of the custom function.
 * @idx: Argument of the custom function.
 * @n: Argument of the custom function.
 * Return: returns the variable named az_dl1
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *az_dl1, *dlit_pnt;
	unsigned int _uint_var;

	az_dl1 = NULL;

	if (idx == 0)
		az_dl1 = add_dnodeint(h, n);
	else
	{
		dlit_pnt = *h;
		_uint_var = 1;
		if (dlit_pnt != NULL)
			while (dlit_pnt->prev != NULL)
				dlit_pnt = dlit_pnt->prev;
		while (dlit_pnt != NULL)
		{
			if (_uint_var == idx)
			{
				if (dlit_pnt->next == NULL)
					az_dl1 = add_dnodeint_end(h, n);
				else
				{
					az_dl1 = malloc(sizeof(dlistint_t));
					if (az_dl1 != NULL)
					{
						az_dl1->n = n;
						az_dl1->next = dlit_pnt->next;
						az_dl1->prev = dlit_pnt;
						dlit_pnt->next->prev = az_dl1;
						dlit_pnt->next = az_dl1;
					}
				}
				break;
			}
			dlit_pnt = dlit_pnt->next;
			_uint_var++;
		}
	}
	return (az_dl1);
}
