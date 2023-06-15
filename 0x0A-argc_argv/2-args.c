#include <stdio.h>
/**
 * main - displays inutted argument.
 * @argc: numbers of argument.
 * @argv: array of arguments.
 * Return: returns 0 when successfull.
 */
int main(int argc, char *argv[])
{
	int az;

	for (az = 0; az < argc; az++)
		printf("%s\n", argv[az]);
	return (0);
}
