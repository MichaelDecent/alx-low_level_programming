#include "main.h"
/**
 * main - entry point
 * @argc: argument count
 * @argv: An array of poninters to a string
 *
 * Return: Always 0
 */
int main (int argc, char* argv[])
{
	int i, j, k;


	i = 1;
	j = 2;
	k = 3;
	if (argc != k)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[i]) * atoi(argv[j]));
	return (0);
}
