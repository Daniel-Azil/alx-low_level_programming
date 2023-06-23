#include "variadic_functions.h"

/**
 * print_all - Display input.
 * @format: arguments passed to function.
 * Return: void
 */
void print_all(const char *const format, ...)
{
	int a = 0;
	char *pnt = "";
	va_list vg;

	va_start(vg, format);
	while (format[a])
	{
		if (format[a] == 'c')
		{
			printf("%s%c", pnt, va_arg(vg, int));
			pnt = ", ";
		}
		else if (format[a] == 'i')
		{
			printf("%s%i", pnt, va_arg(vg, int));
			pnt = ", ";
		}
		else if (format[a] == 'f')
		{
			printf("%s%f", pnt, va_arg(vg, double));
			pnt = ", ";
		}
		else if (format[a] == 's')
		{
			char *str = va_arg(vg, char *);

			if (str == NULL)
			{
				printf("%s(nil)", pnt);
			}
			else
			{
				printf("%s%s", pnt, str);
			}
			pnt = ", ";
		}
		a++;
	}
	va_end(vg);
	puts("");
}
