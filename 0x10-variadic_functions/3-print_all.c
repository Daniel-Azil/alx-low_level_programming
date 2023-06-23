#include "variadic_functions.h"

/**
 * print_all - Display input.
 * @format: arguments passed to function.
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list var;
	unsigned int a = 0, az = 0;
	char *cht;
	va_start(var, format);

	while (format && format[a])
	{
		switch (format[a])
		{
		case 'c':
			if (az)
				printf(", ");
			printf("%c", va_arg(var, int));
			az = 1;
			break;
		case 'i':
			if (az)
				printf(", ");
			printf("%d", va_arg(var, int));
			az = 1;
			break;
		case 'f':
			if (az)
				printf(", ");
			printf("%f", va_arg(var, double));
			az = 1;
			break;
		case 's':
			cht = va_arg(var, char *);
			if (!cht)
				cht = "(nil)";
			if (az)
				printf(", ");
			printf("%s", cht);
			az = 1;
			break;
		}
		a++;
	}
	printf("\n");
	va_end(var);
}
