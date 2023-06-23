#include "variadic_functions.h"

/**
 * print_all - Display input.
 * @format: arguments passed to function.
 *
 * Return: void
 */
void print_all(const char * const format, ...) {
	int i = 0;
	char *sep = "";
	va_list args;
	va_start(args, format);
	while (format[i]) {
		if (format[i] == 'c') {
			printf("%s%c", sep, va_arg(args, int));
			sep = ", ";

		} else if (format[i] == 'i') {
			printf("%s%i", sep, va_arg(args, int));
			sep = ", ";

		} else if (format[i] == 'f') {
			printf("%s%f", sep, va_arg(args, double));
			sep = ", ";

		} else if (format[i] == 's') {
			char *s = va_arg(args, char *);

			if (s == NULL) {
				printf("%s(nil)", sep);

			} else {
				printf("%s%s", sep, s);
			}
			sep = ", ";
		}
		i++;
	}
	va_end(args);
	puts("");
}
