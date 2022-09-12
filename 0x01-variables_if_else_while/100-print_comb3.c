#include <stdio.h>

/**
 * main -  A program that prints all possible different
 * combinations of two digits
 *
 * Return: (0)
 */
int main(void)
{
	int left, right;

	for (left = '0'; left <= '8'; left++)
	{
		for (right = left + 1; right <= '9'; right++)
		{
			putchar (left);
			putchar (right);
			if (left == '8' && right == '9')
				break;
			putchar (',');
			putchar (' ');
		}
	}
	putchar (10);
	return (0);
}
