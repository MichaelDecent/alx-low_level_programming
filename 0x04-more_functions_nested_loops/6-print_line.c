#include "main.h"

/**
 * print_line - Prints a line of given length
 * @n: The length of the line
 */
void print_line(int n)
{
	int i;


	for (i = 0; i < n; i++)
		_putchar('_');
	_putchar('\n');
}
