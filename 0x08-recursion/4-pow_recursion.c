#include "main.h"

/**
 * _pow_recursion - recures the value of x with it exponent y.
 * @x: initial numbers to be used int the prototype
 * @y: exponent of of the value x.
 * Return: out come.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
