#include "main.h"

/**
 * power_operation - square of given number.
 * @n: inputted number varialble.
 * @c: inputted int variable.
 * Return: -1 or sqaure root of inputted number.
 */
int power_operation(int n, int c)
{
	if (c % (n / c) == 0)
	{
		if (c * (n / c) == n)
			return (c);
		else
			return (-1);
	}
	return (0 + power_operation(n, c + 1));
}

/**
 * _sqrt_recursion - sqaure root of inputted numbers used.
 * @n: variavle of the inputted number.
 * Return: square root of inputted number.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);

	if (n == 1)
		return (1);
	return (power_operation(n, 2));
}
