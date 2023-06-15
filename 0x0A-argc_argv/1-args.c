#include <stdio.h>
/**
 * main - displays inputted arguments.
 * @argc: command line arguments.
 * @argv: command line arguments in array form.
 * Return: returns 0 when successful.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
