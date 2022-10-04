#include "main.h"
/**
 * str_concat - A function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int i, j = 0, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/** get length of s1**/
	for (i = 0; s1[i] != 0; i++)
	{
		len1++;
	}

	/** get length of s2*i*/
	for (j = 0; s2[j] != 0; j++)
	{
		len2++;
	}

	p = malloc(sizeof(char) * (len1 + len2));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
	{
		p[i] = s1[i];
	}
	for (j = 0; j < len2; i++, j++)
	{
		p[i] = s2[j];
	}
	return (p);


}
