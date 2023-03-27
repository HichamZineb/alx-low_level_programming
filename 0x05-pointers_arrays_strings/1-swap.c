#include "main.h"

/**
 * swap_int - swaps values of ints
 * @a: pointer to int
 * @b: pointer to int
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)

{
	int c = *a;

	*a = *b;
	*b = c;
}
