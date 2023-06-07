#include "main.h"

/**
 * _print_rev_recursion - displays string in reverse order.
 * @s: pointer.
 * Return: returns void.
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
