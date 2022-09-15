#include <stdio.h>

/**
 *main - Prints the summation of even-valued
 *Fibonacci sequence terms not exceeding 4000000.
 *
 *Return: Always 0.
 */
int main(void)
{
	unsigned long fibonnaci1 = 0, fibonnaci2 = 1, fibonnacisummation;
	float tot_summation;

	while (1)
	{
		fibonnacisummation = fibonnaci1 + fibonnaci2;
		if (fibonnacisummation > 4000000)
			break;

		if ((fibonnacisummation % 2) == 0)
			tot_summation += fibonnacisummation;


		fibonnaci1 = fibonnaci2;
		fibonnaci2 = fibonnacisummation;
	}
	printf("%.0f\n", tot_summation);


	return (0);
}
