#include "search_algos.h"

/**
* interpolation_search - searches for a value in an array of
* integers using the Interpolation search algorithm
* @array: a pointer to the first value of the array to search in
* @size: the number of elements in array
* @value: the value to search
*
* Return: the first index where value is located,
* -1 if array is NULL of value not found
*/

int interpolation_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = size - 1;

	if (size == 0 || !array)
		return (-1);

	while (low <= high)
	{
		size_t pos = low + (((double)(high - low) / (
			array[high] - array[low])) * (value - array[low]));

		if (pos > size)
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			break;
		}
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);

		if (value == array[pos])
			return (pos);
		else if (value < array[pos])
			high = pos - 1;
		else
			low = pos + 1;
	}
	return (-1);
}
