#include "main.h"

/**
 * _print_rev_recursion - prints out a string in reverse form.
 * @s: initialises a pointer 
 * Return: returns nothing.
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
