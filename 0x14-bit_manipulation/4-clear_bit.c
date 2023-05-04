#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index
 * @n: BIt to set the value of
 * @index: Given index
 *
 * Return: 1 for success or -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)

{
	if (index >= 64)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
