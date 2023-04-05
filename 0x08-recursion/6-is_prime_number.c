#include "main.h"

int prime(int n, int i);

/**
 * is_prime_number - checks for prime number
 * @n: number to check
 *
 * Return: 1 if true 0 if false
 */
int is_prime_number(int n)

{
	return (prime(n, 1));
}

/**
 * prime - check prime number
 * @n: number to check
 * @i: incremented nuber
 *
 * Return: 0 or prime
 */
int prime(int n, int i)

{
	if (n <= 1)
	{
		return (0);
	}
	else if (n % i == 0 && i > 1)
	{
		return (0);
	}
	else if ((n / i) < i)
	{
		return (1);
	}
	else
	{
		return (prime(n, i + 1));
	}
}

