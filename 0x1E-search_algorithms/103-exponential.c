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
	size_t i;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;

		if (array[i] == value)
			return (i);

		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
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
	size_t i = 0;
	size_t right;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
	}

	right = i < size ? i : size - 1;

	printf("Value found between indexes [%lu] and [%lu]\n", i / 2, right);

	return (my_binary_search(array, i / 2, right, value));
}
