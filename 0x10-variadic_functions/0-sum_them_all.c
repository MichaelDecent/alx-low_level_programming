#include "variadic_functions.h"
/**
 * sum_them_all - A functions that returns sum of all its parameter
 * @n: parma agr
 *
 * Return: sum of all its parameters
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list num;

	unsigned int sum = 0;
	unsigned int i;

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(num, unsigned int);
	}
	va_end(num);

	return (sum);
}
