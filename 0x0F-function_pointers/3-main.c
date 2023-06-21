#include "3-calc.h"

/**
 * main - checks for Alx studnets.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: Returns 0.
 */
int main(int argc, char *argv[])
{
	int var1, var2;
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}

	op = get_op_func(argv[2]);

	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	var1 = atoi(argv[1]);
	var2 = atoi(argv[3]);

	printf("%d\n", op(var1, var2));
	return (0);
}
