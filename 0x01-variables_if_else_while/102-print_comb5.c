#include <stdio.h>
/**
 * main -  a program that prints all possible combinations
 * of two two-digit numbers
 *
 * Return: (0)
 */
int main(void)
{
	int a, b;
	int c, d;

	for (a = 0; a <= 9; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			putchar (a);
			putchar (b);
			putchar (' ');

		}
	}
	for (c = '0'; c <= 9; c++)
	{

		for (d = c + 1; d <= '8'; d++)
		{
			putchar (c);
			putchar (d);
			putchar (',');
			putchar (' ');
		}

	}

	putchar (10);
	return (0);
}
