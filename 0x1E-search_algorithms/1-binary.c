#include "search_algos.h"

/**
* binary_search - hat searches for a value in an array of
* integers using the Binary search algorithm
* @array: a pointer to the first value of the array to search in
* @size: the number of elements in array
* @value: the value to search
*
* Return: the first index where value is located,
* -1 if array is NULL of value not found
*/

int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;

	if (size == 0)
		return (-1);

	while (left <= right)
	{
		int mid = (left + right) / 2;
		int i = left;
		int j = right;

		printf("Searching in array: ");
		for (; i <= j; i++)
			printf("%d, ", array[i]);
		printf("\n");

		if (value == array[mid])
			return (mid);
		else if (value < array[mid])
			right = mid - 1;
		else
			left = mid + 1;
	}
	return (-1);
}
