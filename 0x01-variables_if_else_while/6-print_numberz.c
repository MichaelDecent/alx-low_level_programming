#include <stdio.h>

/**
 * main - a program that prints all single digit numbers of base 10
 *
 * Return: Always (0) (Success)
 */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	putchar(10);
	return (0);
}

