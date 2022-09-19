#include "main.h"
/**
 * swap_int - function that swaps the value of two integer
 * @a: integer a variable pointer
 * @b: integer b varible pointer
 */
void swap_int(int *a, int *b)
{
	int *c;
	*c = *a;
	*a = *b;
	*b = *c;
}
