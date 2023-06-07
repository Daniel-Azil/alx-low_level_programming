#include "main.h"

/**
 * factorial - brings back the factorial num of a given digit.
 * @n: variable if a given number.
 * Return: returns the factorial number of the given or inputted number.
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
