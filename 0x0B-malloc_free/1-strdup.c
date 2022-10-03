#include "main.h"
/**
 * _strdup - a function that returns a pointer
 * to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter
 * @str: the string
 *
 * Return: a pointer to a newly allocated space
 *
 */
char *_strdup(char *str)
{
	int i, len = 0;
	char *p;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != 0; i++)
		len++;

	p = malloc(sizeof(char) * (len + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		p[i] = str[i];

	}
	return (p);


}


