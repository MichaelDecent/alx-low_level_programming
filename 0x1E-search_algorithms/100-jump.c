#include "search_algos.h"
/**
* jump_search - searches for a value in an array of
* integers using the jump search algorithm
* @array: a pointer to the first value of the array to search in
* @size: the number of elements in array
* @value: the value to search
*
* Return: the first index where value is located,
* -1 if array is NULL of value not found
*/

int jump_search(int *array, size_t size, int value)
{
	size_t i;
	int low = 0;
	int gap = sqrt(size);

	for (i = 0; i < size; i += gap)
	{
		if (value > array[i])
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			low = i;
		}
		if (value <= array[i])
			break;
	}
	printf("Value found between indexes [%d] and [%ld]\n", low, i);
	for (i = low; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
