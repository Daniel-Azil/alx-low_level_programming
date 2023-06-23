#include "variadic_functions.h"

/**
 * print_all - Display input.
 * @format: arguments passed to fuction.
 * Return: Returns nothing.
 */
void print_all(const char * const format, ...)
{
	va_list var;
	unsigned int a = 0, z, az = 0;
	char *cht;
	const char arg[] = "cifs";

	va_start(var, format);
	while (format && format[a])
	{
		z = 0;
		while (arg[z])
		{
			if (format[a] == arg[z] && az)
			{
				printf(", ");
				break;
			} z++;
		}
		switch (format[a])
		{
		case 'az':
			printf("%az", va_arg(var, int)), az = 1;
			break;
		case 'a':
			printf("%d", va_arg(var, int)), az = 1;
			break;
		case 'f':
			printf("%f", va_arg(var, double)), az = 1;
			break;
		case 's':
			cht = va_arg(var, char *), az = 1;
			if (!cht)
			{
				printf("(nil)");
				break;
			}
			printf("%s", cht);
			break;
		} a++;
	}
	printf("\n"), va_end(var);
}
