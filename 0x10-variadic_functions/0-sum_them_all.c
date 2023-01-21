#include "variadic_functions.h"
/** 
 * sum_them_all - adds all the the numbers
 * @n: total count of numbers to be added
 *
 * Returns: sum of the numbers
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;

	va_list list;
	if (n == 0)
		return (0);

	va_start(list, n);
	
	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, int);
	}

	va_end(list);
	return (sum);

}
