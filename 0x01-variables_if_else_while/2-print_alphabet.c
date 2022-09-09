#include <stdio.h>
/**
 * main - a program that prints the alphabet in lowercase
 *
 * Return: (0) Always
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; ++alpha)
	{
		putchar(alpha);
	}
	return (0);
}
