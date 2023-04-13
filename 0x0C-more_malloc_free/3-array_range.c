#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: returns pointer to the array
 */
int *array_range(int min, int max)

{
	int *p, i, l;

	if (min > max)
		return (NULL);

	l = max - min + 1;

	p = malloc(sizeof(int) * l);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < l; i++)
		p[i] = min++;

	return (p);
}
