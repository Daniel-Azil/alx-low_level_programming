#include "main.h"
#include <stdlib.h>
/**
 * _calloc - array memory allocation.
 * @nmemb: elements index.
 * @size: bytes size.
 * Return: returns pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pnt;
	unsigned int a;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pnt = malloc(nmemb * size);

	if (pnt == NULL)
		return (NULL);

	for (a = 0; a < (nmemb * size); a++)
		pnt[a] = 0;

	return (pnt);
}
