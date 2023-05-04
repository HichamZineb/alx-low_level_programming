#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index
 * @n: The bit to get
 * @index: Given index
 *
 * Return: The value of the bit at index or  -1 if error occurs
 */
int get_bit(unsigned long int n, unsigned int index)

{
	if (index >= 64)
		return (-1);
	if ((n & (1 << index)) == 0)
		return (0);
	return (1);
}

