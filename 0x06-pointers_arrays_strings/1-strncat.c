#include "main.h"
/**
 * _strncat - a function that concatenates two strings.
 * @dest: destination string
 * @src: source string
 * @n: number of byte
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j, len = 0;

	for (i = 0; 1; i++)
	{
		if (dest[i] == '\0')
			break;
		len++;
	}

	for  (j = 0; j < n; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
