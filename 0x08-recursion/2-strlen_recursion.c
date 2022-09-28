#include "main.h"

/**
 * _strlen_recursion - A function that returns a length of string
 * @s: string to be counted
 * Return: (lenghth of the of the string)
 *
 */
int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s == '\0')
		return (count);

	count = _strlen_recursion(s + 1) + 1;


	return (count);
}
