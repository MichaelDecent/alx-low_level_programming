#include "search_algos.h"
/**
 * print_array - prints the array in a specified format
 * @array: a pointer to the first value of the array to search in
 * @beg: the first index of the array
 * @end: the last index of the array
 *
 * Return: Nothing
*/
void print_array(int *array, int beg, int end)
{
	printf("Searching in array: ");
	for (; beg < end; beg++)
		printf("%d, ", array[beg]);
	printf("%d\n", array[beg]);

}

/**
* eBinary_search - searches for a value in an array of
* integers using the Binary search algorithm
* @array: a pointer to the first value of the array to search in
* @left: the lowest index of the array
* @right: the highest index of the array
* @value: the value to search
*
* Return: the first index where value is located,
* -1 if array is NULL of value not found
*/
int eBinary_search(int *array, int left, int right, int value)
{
	while (left <= right)
	{
		int mid = (left + right) / 2;

		print_array(array, left, right);

		if (value == array[mid])
			return (mid);
		else if (value < array[mid])
			right = mid - 1;
		else
			left = mid + 1;
	}
	return (-1);
}

/**
* exponential_search - searches for a value in an array of
* integers using the Exponential search algorithm
* @array: a pointer to the first value of the array to search in
* @size: the number of elements in array
* @value: the value to search
*
* Return: the first index where value is located,
* -1 if array is NULL of value not found
*/
int exponential_search(int *array, size_t size, int value)
{
	int low;
	size_t i;

	if (!array || size == 0)
		return (-1);

	if (value == array[0])
		return (0);

	for (i = 1; i < size && value >= array[i]; i *= 2)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		low = i;
	}
	return (eBinary_search(array, low, i - 1, value));
}
