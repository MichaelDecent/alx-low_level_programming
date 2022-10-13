#include "function_pointers.h"
/**
 * int_index - A function that searches for an integer
 * @array: a pointer array of int
 * @size: the size of the array
 * @cmp: a function pointer
 *
 * Return: -1 if no elements matches or is size <= 0 else index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		cmp(array[i]);
		if (cmp(arrar[i] != 0))
			return (i);

	}
	return (-1);
}
