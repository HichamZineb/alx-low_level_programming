#include "main.h"

/**
 * set_bit - Sets the value of a bit to -1 at agiven index
 * @n: The bit to set the value of
 * @index: Given index
 *
 * Return: 1 for success or -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)

{
	if (index >= 64)
		return (-1);
	*n ^= (1 << index);
	return (1);
}
