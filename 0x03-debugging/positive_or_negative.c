#include "main.h"

/**
 * positive_or_negative - this function indicates
 * whether the number assigned to the
 * variable is a positive, negative number or zero
 * @i:  the variabel that stores the number assigneed to it
 * Return: Always 0
 */

void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else
	{
		printf("%d is zero\n", i);
	}
}
