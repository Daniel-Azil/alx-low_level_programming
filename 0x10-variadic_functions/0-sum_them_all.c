#include "variadic_functions.h"

/**
 * sum_them_all - addion of all parameters.
 * @n: arguement number.
 * Return: sum of parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list var1;
	unsigned int a;
	int add = 0;

	if (n == 0)
		return (0);

	va_start(var1, n);

	for (a = 0; a < n; a++)
		add += va_arg(var1, int);

	va_end(var1);

	return (add);
}
