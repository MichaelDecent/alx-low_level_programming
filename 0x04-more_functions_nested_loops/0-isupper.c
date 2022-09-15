#include "main.h"
/**
 * _isupper - A functions that checks for uppercase character
 * @c: the character to be checked
 *
 * Return: (1) if c is uppercase and 0 if otherwise
 */
int _isupper(int c)
{
	if ('A' >= c <= 'Z')
		return (0);
	else
		return (1);
}
