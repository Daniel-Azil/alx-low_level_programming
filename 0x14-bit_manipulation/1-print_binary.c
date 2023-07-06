#include "main.h"
/**
 * print_binary - This function prints out the converted binary.
 * @n: Argument of the given function of the variable type
 * unsigned long int.
 *
 * Return: This function returns nothing.
 */
void print_binary(unsigned long int n)
{
	if (n >> 0)
	{
		if (n >> 1)
			print_binary(n >> 1);
		_putchar((n & 1) + '0');
	}
	else
	{
		_putchar('0');
	}
}
