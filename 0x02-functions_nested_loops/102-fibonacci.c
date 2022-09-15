#include <stdio.h>

/**
 *  * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *   *
 *    * Return: Always 0.
 *     */
int main(void)
{
	int count;
	unsigned long fibonnaci1 = 0, fibonnaci2 = 1, summation;


	for (count = 0; count < 50; count++)
	{
		summation = fibonnaci1 + fibonnaci2;
		printf("%lu", summation);

	
		fibonnaci1 = fibonnaci2;
		fibonnaci2 = summation;

	
		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}


	return (0);
}
