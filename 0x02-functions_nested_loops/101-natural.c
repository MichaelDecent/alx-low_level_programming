#include <stdio.h>

/**
 *main - Lists all the natural numbers below 1024 (excluded)
 *that are multiples of 3 or 5.
 *
 *Return: Always 0.
 */
int main(void)
{
	int n, multiples = 0;


	for (n = 0; n < 1024; n++)
	{
		if ((n % 3) == 0 || (n % 5) == 0)
			multiples = multiples + n;
	}

	printf("%d\n", multiples);

	return (0);
}
