/**
 * puts_half - prints the half of string
 * @str: value
 */

#include "main.h"

void puts_half(char *str)
{
	int s = 0, n;


	while (str[s] != '\0')
	{
		s++;
	}
	if (s + 1 % 2 != '\0')
		n = (s - 1) / 2;
	else
		n = (s / 2);
	n++;


	for (s = n; str[s] != '\0'; s++)
	{
		_putchar(str[s]);
	}
	_putchar('\n');
}
