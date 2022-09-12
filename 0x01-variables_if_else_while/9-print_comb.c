#include <stdio.h>

/**
 * main - a program that prints all possible
 * combination of single-digit numbers
 *
 * Return: (0)
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar (num);
		if (num == 9)
			break;
		putchar (',');
		putchar (' ');
	}
	putchar (10);
	return (0);
}
