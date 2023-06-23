#include "variadic_functions.h"

/*)*
 * print_strings - displays strings.
 * @separator: initialised a pointer.
 * @n: strings to be passed to function.
 * Return: Returns nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list var;
	unsigned int a;
	char *cht;

	va_start(var, n);

	for (a = 0; a < n; a++)
	{
		cht = va_arg(var, char *);

		if (cht)
			printf("%s", cht);
		else
			printf("(nil)");

		if (a < n - 1)
			if (separator)
				printf("%s", separator);
	}

	printf("\n");
	va_end(var);
}
