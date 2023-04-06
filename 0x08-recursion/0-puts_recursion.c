#include "main.h"

/**
 * _puts_recursion - prints out a string with a new line.
 * @s: initialises a pointer
 * Return: returns nothing.
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
