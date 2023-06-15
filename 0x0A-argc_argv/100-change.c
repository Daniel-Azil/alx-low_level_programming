#include <stdio.h>
#include <stdlib.h>
/**
 * main - displays the least number of coins to change for amount of money.
 * @argc: command line arguments.
 * @argv: array of arguments
 * Return: returns 0 when successfull.
 */
int main(int argc, char *argv[])
{
	int a_ct, az_ct = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	a_ct = atoi(argv[1]);

	while (a_ct > 0)
	{
		if (a_ct >= 25)
			a_ct -= 25;
		else if (a_ct >= 10)
			a_ct -= 10;
		else if (a_ct >= 5)
			a_ct -= 5;
		else if (a_ct >= 2)
			a_ct -= 2;
		else if (a_ct >= 1)
			a_ct -= 1;
		az_ct += 1;
	}
	printf("%d\n", az_ct);
	return (0);
}
