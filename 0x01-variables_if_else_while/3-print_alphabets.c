#include <stdio.h>

/**
 * main -a program that prints the alphabet in lowercase, and then in uppercase
 *
 * Return: (0) Always
 */
int main(void)
{
	char l;
	char u;

	for (l = 'a'; l <= 'z'; ++l)
	{
		putchar(l);
	}
	for (u = 'A'; u <= 'Z'; ++u)
	{
		putchar(u);
	}
	putchar(10);

	return (0);
}
