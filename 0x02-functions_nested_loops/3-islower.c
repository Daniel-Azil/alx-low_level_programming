#include "main.h"

/**
 * _islower - function that checks for lowercase character.
 * @c: The input character to check
 * Return: int.
 */

int _islower(int c)
{
	if (c >= 'a' || c <= 'z')
		return (0);
	else
		return (1);
}
