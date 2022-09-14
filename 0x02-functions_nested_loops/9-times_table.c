#include "main.h"
#include <stdio.h>
/**
 *times_table -prints tables
 */
void times_table(void)
{
	int a = 0;
	int b;
	int c;


	while (a <= 9)
	{
		b = 0;
		while (b <= 9)
		{
			c = a * b;
			printf("%d,  ", c);
			b++;
		}
		printf("\n");
		a++;
	}
}
