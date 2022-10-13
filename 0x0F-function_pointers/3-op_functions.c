#include "3-calc.h"
/**
 * op_add - A function that adds two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: sum of a and b
 *
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 *  op_sub - A function that substracts two integers
 *  @a: first integer
 *  @b: second integer
 *
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - A function that multiplies two numbers
 * @a: first number
 * @b: second number
 *
 * Return: product a nd b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - A function that divdes two numbers
 * @a: first number
 * @b: second number
 *
 * Return: division a nd b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - A funtion that calculate the modulus of
 * two numbers
 * @a: first number
 * @b: second numer
 *
 * Return: the reminder of a/b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
