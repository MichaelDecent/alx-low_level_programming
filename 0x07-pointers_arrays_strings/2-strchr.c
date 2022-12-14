#include "main.h"
/**
 * _strchr - A function that locates a character in a string
 * @s: the string
 * @c: the character to be searched
 *
 * Return:  if character is found else NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}

		++s;
	}

	if (*s == c)
	{
		return (s);
	}

	return (0);
}
