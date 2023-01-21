#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: separator
 * @n: count of string
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		char *str = va_arg(list, char*);

		if (str == NULL)
			printf("(nil)");

		else
		{
			if (i == n - 1 || separator == NULL)
				printf("%s", str);

			else
				printf("%s%s", str, separator);
		}
	}
	printf("\n");
	va_end(list);

}
