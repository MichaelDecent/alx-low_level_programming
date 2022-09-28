#include "main.h"
/**
 * _pow_recursion - A function thta returns the value of
 *  x raised to the power of y
 *  @x: an integer
 *  @y: power of integer x
 *   Return: -1 if y is lower than 0
 *
 */
int _pow_recursion(int x, int y)
{
	int pown;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	pown = x * _pow_recursion(x, (y - 1));
	return (pown);
}
