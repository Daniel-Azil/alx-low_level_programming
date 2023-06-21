#include "function_pointers.h"

/**
 * print_name - displays name.
 * @name: name input.
 * @f: pointer.
 * Return: returns nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
