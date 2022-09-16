#include "main.h"
/**
 * print_most_numbers - A function thta prints the numbers from 0 to 9
 */
void print_most_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		if (i == 2 || i == 4)
			continue;
		_putchar (i);
		i++;
	}
	_putchar ('\n');
}
