#include "main.h"

/**
 * flip_bits - Returns the number of bits to flip to get from number to another
 * @n: Number of bits you need to flip
 * @m: Number to flip to
 *
 * Return: n
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)

{
	unsigned long int a;
	unsigned long int b;

	a = n ^ m;
	b = 0;

	while (a > 0)
	{
		b += (a & 1);
		a >>= 1;
	}
	return (b);
}
