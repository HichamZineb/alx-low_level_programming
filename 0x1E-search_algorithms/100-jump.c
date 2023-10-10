#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of integers
 * using the Jump search algorithm.
 *
 * @array: Pointer to the first element of the array to search in.
 * @size: The number of elements in array.
 * @value: The value to search for.
 *
 * Return: The first index where value is located or -1.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t start = 0;
	size_t end = 0;
	int jmp = 3;

	if (!array)
		return (-1);

	while (end < size && array[end] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", end, array[end]);
		end += jmp;
	}

	start = end - jmp;
	printf("Value found between indexes [%ld] and [%ld]\n", start, end);

	end = end >= size ? size - 1 : end;

	while (start <= end)
	{
		printf("Value checked array[%ld] = [%d]\n", start, array[start]);

		if (array[start] == value)
			return ((int)start);
		start++;
	}
	return (-1);
}
