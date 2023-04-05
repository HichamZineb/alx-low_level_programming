#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate natural square root of
 * @x: incremented guess
 *
 * Return: square root
 */

int sqrt_n(int n, int x);

int _sqrt_recursion(int n)

{
	return (sqrt_n(n, 1));
}

/**
 * sqrt_n - square root of n
 * @n: number to calculate square root of
 * @x: incremented guess
 *
 * Return: square root or -1
 */
int sqrt_n(int n, int x)

{
	int square = x * x;

	if (square > n)
	{
		return (-1);
	}
	else if (square == n)
	{
		return (x);
	}
	else
	{
		return (sqrt_n(n, x + 1));
	}
}

