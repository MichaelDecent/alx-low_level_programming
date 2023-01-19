#include "function_pointers.h"

/**
 * int_index - A function that searches for the integer
 * @array: an array of integer
 * @size: size of an integer
 * @cmp: a function pointer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if ((cmp(array[i])) != 0)
				return (i);
		}
	}
	return (0);
}
