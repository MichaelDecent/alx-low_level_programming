#include <stdio.h>

/**
 *main - a program that prints all single digit numbers of base 10
 *
 *Return: Always (0) (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 10; ++n)
	{
		putchar(n);
	}
	putchar(10);
	return (0);
}
