#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: The length of the line
 */
void print_diagonal(int n)
{
	int i, k;


	for (i = 0; i < n; i++)
	{
		for (k = 0; k < i; k++)
			_putchar(' ');

		_putchar('\\');
		if (i == n - 1)
			continue;

		_putchar('\n');
	}
	_putchar('\n');
}
