#include <stdio.h>
#include <stdlib.h>
/**
 * main - mainf fuction.
 * @argc: number of arguments.
 * @argv: array of arguments.
 * Return: return 0 when successfull.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
