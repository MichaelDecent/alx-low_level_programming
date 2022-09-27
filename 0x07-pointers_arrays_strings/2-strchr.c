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
	int i;

	for (i = 0; s[i] != 0; i++)
	{
		if (s[i] == c)
			return (s);
	}
	if (s[i] == c)
		return (s);

	return (0);

}
