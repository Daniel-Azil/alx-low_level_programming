#include "3-calc.h"

/**
 * op_add - adds both int a and b.
 * @a: first number.
 * @b: second number.
 * Return: returns summation.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subctracts both int a and b.
 * @a: first number.
 * @b: second number.
 * Return: returns result.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies both int a and n.
 * @a: first number.
 * @b: second number.
 * Return: retruns result.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides both int a and b.
 * @a: first number.
 * @b: second number.
 * Return: returns result.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - calculates the mod of both int a and b..
 * @a: first number.
 * @b: second number.
 * Return: returns mod.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
