#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - sums numbers.
 * @argc: number of arguments.
 * @argv: array of arguments.
 * Return: returns 0 when successfull.
 */
int main(int argc, char *argv[])
{
	int a, z, sum = 0;

	for (a = 1; a < argc; a++)
	{
		for (z = 0; argv[a][z] != '\0'; z++)
		{
			if (!isdigit(argv[a][z]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[a]);
	}
	printf("%d\n", sum);
	return (0);
}
