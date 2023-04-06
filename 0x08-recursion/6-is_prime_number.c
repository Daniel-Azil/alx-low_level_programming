#include "main.h"

/**
 * is_prime - checks whether an inputted number is a prime number.
 * @n: initialised variable.
 * @c: initialised variable.
 * Return: returns 0 or 1.
 */
int is_prime(unsigned int n, unsigned int c)
{
	if (n % c == 0)
	{
		if (n == c)
			return (1);
		else
			return (0);
	}
	return (0 + is_prime(n, c + 1));
}
/**
 * is_prime_number - checks whether inputted number is a prime number.
 * @n: initialised variable.
 * Return: returns 0 or 1.
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (is_prime(n, 2));
}
