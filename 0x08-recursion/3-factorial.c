#include "main.h"

/**
 * factorial - returns back the factorial number of a number.
 * @n: initialised variable to store inputted number.
 * Return: returns the factorial number of the inputted number.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
