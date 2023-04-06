#include "main.h"

/**
 * _pow_recursion - displays the value of x with the exponent y.
 * @x: initial number use
 * @y: exponent of the initial number.
 * Return: the results.
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
