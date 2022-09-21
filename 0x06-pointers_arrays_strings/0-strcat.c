#include "main.h"
/**
 * _strcat - a function that concatenates two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j, len1 = 0, len2 = 0;

	for (i = 0; 1; i++)
	{
		if (dest[i] == '\0')
			break;
		len1++;
	}
	for (j = 0; 1; j++)
	{
		if (src[j] == '\0')
			break;
		len2++;
	}
	for  (i = 0; i <= len2; i++)
	{
		dest[len1 + i] = src[i];
		_putchar (dest[len1]);
	}
	return (dest);
}
