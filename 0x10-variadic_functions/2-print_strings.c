#include "variadic_functions.h"
/**
 * print_strings - print strings
 * @n: number of arguments
 * @separator: string between numbeers
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;


	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		char *var = va_arg(arg, char *);


		if (var)
			printf("%s", var);
		else
			printf("(nil)");
		if ((separator != NULL) && (i < n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(arg);
}
