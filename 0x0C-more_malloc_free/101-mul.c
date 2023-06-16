#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * main - multiplication of numbers
 * @argc: arguments
 * @argv: arguments
 * Return: retunrs 0
**/

int main(int argc, char *argv[])
{
	unsigned long mul;
	int num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (a = 1; a < argc; a++)
	{
		for (j = 0; argv[a][j] != '\0'; j++)
		{
			if (argv[a][j] > 57 || argv[a][j] < 48)
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	cal = atol(argv[1]) * atol(argv[2]);
	printf("%lu\n", cal);
	return (0);
}
