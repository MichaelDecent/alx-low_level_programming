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
	for  (j = 0; j <= len2 && j < n; j++)
	{
		dest[len1 + i] = src[j];
		i++;
	}
	return (dest);
}
