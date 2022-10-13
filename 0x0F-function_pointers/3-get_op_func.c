#include "3-calc.h"
/**
 * get_op_func - A function that selects the correct
 * function to perform the operation asked by the use
 * @s: a pointer to the operator
 *
 * Return: a pointer to the function that corresponds
 * to the operator given as a parameter
 */
int (*get_op_func(char *s))(int, int)
{

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	for (i = 0; i < 5; i++)
	{
		if (*ops[i].op == *s)
		return (ops[i].f);
	}
	return (NULL);
}
