#include <stdio.h>
/**
 * main - Prints the name of the program, followed by a new line.
 * @argc: The number of command line arguments.
 * @argv: An array containing the command line arguments.
 * Return: 0 on success.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
