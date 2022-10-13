#include "function_pointers.h"
/**
 * array_iterator - A function that executes a function
 * given as a parameter on each element of an array
 * @array: a pointer to a function
 * @size: size of thye array
 * @action: a function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}

}
