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
	unsigned int num = 0;

	if (!b)
		return (0);

	while (b[i])
	{
		if (b[i] < 48 || b[i] > 49)
			return (0);
		num = 2 * num + (b[i] - 48);
		i++;
	}
	return (num);
}
