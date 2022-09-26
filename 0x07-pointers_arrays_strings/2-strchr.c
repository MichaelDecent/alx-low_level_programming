#include "main.h"
/**
 * _strchr - A function that locates a character in a string
 * @s: the string
 * @c: the character to be searched
 *
 * Return: c if character is found else NULL
 */
char *_strchr(char *s, char c)
{
	int i, len = 0;
	for (i = 0; s[i] != 0; i++)
		len ++;
	for (i = 0; i < len; i++)
	{
		if (s[i] == c)
			return (s);
	}
	return (0);

}
