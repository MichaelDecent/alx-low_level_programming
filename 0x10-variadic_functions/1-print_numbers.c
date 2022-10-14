#include "variadic_functions"
/**
 * print_numbers - print numbers
 * @n: number of arguments
 * @separator: string between numbeers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i, var;


	va_start(arg, n);


	for (i = 0; i < n; i++)
	{
		var = va_arg(arg, unsigned int);

	
		printf("%d", var);
		if ((i < n - 1) && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arg);
}
