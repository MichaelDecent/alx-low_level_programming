#include "main.h"

/**
 * _memset - A function that fills memory with a constant byte
 * @s: a pointer to the memory area
 * @n: the number of bytes to fill the memory
 * @b: the constant byte
 *
 * Return:(s)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);

}
