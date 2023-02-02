#include "main.h"

/**
 * binary_to_uint - a function that converts a binary
 * number to an unsigned int
 * @b: a string of binary number to be converted
 *
 * Return: The converted number
 */

unsigned int binary_to_uint(const char *b)
{
	const char *s;
	unsigned int value, n, power, sum = 0;

	if (b == NULL)
		return (0);
	s = b;
	while (*b != '\0')
	{
		b++;
	}
	b--;

	power = 0;
	while (b >= s)
	{
		if (*b != '0' && *b != '1')
			return (0);
		n = *b - '0';
		value = n << power;
		sum += value;
		b--;
		power++;
	}
	return (sum);

}
