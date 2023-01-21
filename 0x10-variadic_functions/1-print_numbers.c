#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: separators
 * @n: count numbers to print
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%d\n", va_arg(list, int));
		else
			printf("%d%s", va_arg(list, int), separator);
	}
	va_end(list);
}
