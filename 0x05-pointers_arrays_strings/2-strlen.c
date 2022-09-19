#include "main.h"

/**
 * _strlen - to print the length of a string
 * @s: string to be checked
 * Return: the length of a string
 */
int _strlen(char *s)
{
	int len = 0;

	for (; *s++)
		len++;

	return (len);
}
