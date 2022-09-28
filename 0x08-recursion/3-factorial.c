#include "main.h"
/**
 * factorial - A function thta returns the factorial of a given number
 * @n: an integer
 *
 * Return: -1 if n is lower thtan 0
 *
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	n = n * factorial(n - 1);
	return (n);
}
