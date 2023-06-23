#include "variadic_functions.h"

/**
 * print_all - Display input.
 * @format: arguments passed to function.
 * Return: void
 */
void print_all(const char * const format, ...) {
	int a = 0;
	char *var = "";
	va_list args;
	va_start(args, format);
	while (format[a]) {
		if (format[a] == 'c') {
			printf("%s%c", var, va_arg(args, int));
			var = ", ";

		} else if (format[a] == 'i') {
			printf("%s%i", var, va_arg(args, int));
			var = ", ";

		} else if (format[a] == 'f') {
			printf("%s%f", var, va_arg(args, double));
			var = ", ";

		} else if (format[a] == 's') {
			char *z = va_arg(args, char *);

			if (z == NULL) {
				printf("%s(nil)", var);

			} else {
				printf("%s%s", var, z);
			}
			var = ", ";
		}
		a++;
	}
	va_end(args);
	puts("");
}
