#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: Pointer to the number in  the string
 *
 * Return: Converted number or 0
 */
unsigned int binary_to_uint(const char *b)

{
	unsigned int i = 0;
	unsigned int bin = 0;
	unsigned int pos = 1;
	unsigned int num = 0;
	unsigned int rem = 0;

	if (!b)
		return (0);

	while (b[i])
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);

		bin = bin * 10 + b[i] - '0';
		i++;
	}

	while (bin != 0)
	{
		rem = bin % 10;
		num += rem * pos;
		bin = bin / 10;
		pos = pos * 2;
	}
	return (num);
}
