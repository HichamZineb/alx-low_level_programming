#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes function on each element of array
 * @array: array
 * @size: size of array
 * @action: pointer to function
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))

{
	unsigned int i;

	if (array != NULL && action != NULL && size > 0)

		for (i = 0; i < size; i++)
			action(array[i]);
}
