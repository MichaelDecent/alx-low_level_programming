#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Aways 0 (Success)
 */
int main(void)
{
	int *i;
	char *c;
	float *f;
		printf("Size of a char: %lu.\n", (unsigned long)sizeof(c));
		printf("Size of an int: %lu.\n", (unsigned long)sizeof(i));
		printf("Size of a long int: %lu.\n", (unsigned long)sizeof(i));
		printf("Size of a long long int: %lu.\n", (unsigned long)sizeof(i));
		printf("Size of a float: %lu.\n", (unsigned long)sizeof(f));
	return (0);
}
