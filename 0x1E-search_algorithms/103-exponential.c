#include "search_algos.h"

/**
 * binarysearch - Searches for a value in a sorted array of integers
 * using the Binary search algorithm.
 *
 * @array: Pointer to the first element of the array to search in.
 * @left: First element to start the search from.
 * @right: Last element of the array.
 * @value: The value to search for.
 *
 * Return: The first index where value is located or -1.
 */
int binarysearch(int *array, size_t left, size_t right, int value)
{
	size_t mid = left;
	size_t i;

	if (!array)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		mid = (left + right) / 2;
		if (array[mid] == value)
			return (mid);
		left = mid + 1;
	}
	return (-1);
}

/**
 * exponential_search - Searches for a value in a sorted array of integers
 * using the Exponential search algorithm.
 *
 * @array: Pointer to the first element of the array to search in.
 * @size: The number of elements in array.
 * @value: The value to search for.
 *
 * Return: The first index where value is located or -1.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1;
	int left, right;

	if (!array)
		return (-1);

	/*if (array[0] == value)
		return (array[0]);*/

	while (array[i] <= value && i < size - 1)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i = i * 2;
	}

	left = i / 2;
	right = i < size - 1 ? i : size - 1;

	printf("Value found between indexes [%d] and [%d]\n", left, right);

	return (binarysearch(array, left, right, value));
}
