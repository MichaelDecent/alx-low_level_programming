#include "main.h"
/**
 * print_rev - a function that prints a sting in reverse
 * @s: the string to be printed
 */
void print_rev(char *s)
{
	int i;

	for (i = '\0'; s[i] >= '0'; i--)
		_putchar (s[i]);

	_putchar ('\n');
}
