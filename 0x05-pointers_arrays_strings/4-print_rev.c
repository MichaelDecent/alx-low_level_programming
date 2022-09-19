#include "main.h"
/**
 * print_rev - a function that prints a sting in reverse
 * @s: the string to be printed
 */
void print_rev(char *s)
{
	int i, rev;

	for (i = '0'; s[i] != '\0'; i++)

	for (rev = i - 1; rev >= 0; rev--)
		putchar(s[rev]);

	_putchar ('\n');
}
