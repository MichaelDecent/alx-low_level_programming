#include "3-calc.h"

/**
 * main - performs simple operation
 * @ac: number of argument
 * @av: string of arguments
 *
 * Return: 0 Always
 */
int main(int ac, char **av)
{
	int (*func)(int a, int b);
	int result, num1, num2;

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(av[1]);
	num2 = atoi(av[3]);

	func = get_op_func(av[2]);

	if (func == NULL)
	{
		printf("Error99\n");
		exit(99);
	}
	if (((*av[2] == '/') && (num2 == 0)) || ((*av[2] == '%') && (num2 == 0)))
	{
		printf("Error\n");
		exit(100);
	}
	result = func(num1, num2);
	printf("%d\n", result);

	return (0);

}
