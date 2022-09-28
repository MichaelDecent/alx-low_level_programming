#include "main.h"
/**
 * _puts_recursion - A function that prints a string
 * folloed by a new line
 * @s: the string to be printed
 *
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		_putchar ('\n');
		return;
	}
	_putchar (s[i]);
	_puts_recursion(s + 1);

}
