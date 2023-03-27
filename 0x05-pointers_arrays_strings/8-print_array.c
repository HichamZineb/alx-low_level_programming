#include "main.h"

/**
 * print_array - print n elements of an array of integers
 * @a: pointer
 * @n: n elements
 *
 * Return: nothing
 */
void print_array(int *a, int n)

{
	for (n = 0; n < 5; n++)
	{
		printf("%d, ", a[n]);
	}
	printf("\n");
}
