#include "search_algos.h"

/**
 * my_binary_search - Searches for a value in a sorted array of integers
 * using the Binary search algorithm.
 *
 * @array: Pointer to the first element of the array to search in.
 * @left: First element to start the search from.
 * @right: Last element of the array.
 * @value: The value to search for.
 *
 * Return: The first index where value is located or -1.
 */
int my_binary_search(int *array, size_t left, size_t right, int value)
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

		mid = left + (right - left) / 2;
		if (array[mid] == value)
			return (mid);

		if (array[mid] > value)
			right = mid - 1;
		else
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
	size_t left, right;

	if (!array)
		return (-1);

	if (array[0] != value)
	{
		while (array[i] <= value && i < size)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			i = i * 2;
		}
	}

	left = i / 2;
	right = i < size ? i : size - 1;

	printf("Value found between indexes [%lu] and [%lu]\n", left, right);

	return (my_binary_search(array, left, right, value));
}
