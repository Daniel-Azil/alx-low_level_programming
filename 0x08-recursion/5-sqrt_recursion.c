#include "main.h"

/**
 * power_operation - displays the square root of the number used.
 * @n: initialised variable storing the inputted number.
 * @c: initialised variable.
 * Return: -1 or the sqaure root of the inputted numebr.
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
 * _sqrt_recursion - displays the sqaure root of the numbers used.
 * @n: variavle that store the inputted number.
 * Return: returns the square root of the number used.
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
