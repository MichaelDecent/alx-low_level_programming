#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a sizeew line.
 * @size: The size of the triangle
 */
void print_triangle(int size)
{
	int i, j, k;
	int l = 1;
	int m = size - 1;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < m; j++)
			_putchar(' ');


		for (k = 0; k < l; k++)
			_putchar('#');
		l++;
		m--;
		if (i == size - 1)
			continue;
		_putchar('\n');
	
	}
	_putchar('\n');
}
