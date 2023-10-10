#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array of integers.
 * using the Interpolation search algorithm.
 *
 * @array: Pointer to the first element of the array to search in.
 * @size: The number of elements in array.
 * @value: The value to search for.
 *
 * Return: The first index where value is located or -1.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t x = 0, low = 0, high = size - 1;

	if (!array)
		return (-1);

	while (value >= array[low])
	{
		x = low + (((double)(high - low) / (array[high] - array[low]))
				* (value - array[low]));

		if (x > size)
		{
			printf("Value checked array[%lu] is out of range\n", x);
			return (-1);
		}

		printf("Value checked array[%lu] = [%d]\n", x, array[x]);

		if (array[x] < value)
			low = x + 1;
		else if (array[x] > value)
			high = x - 1;
		else
			return (x);
	}
}
