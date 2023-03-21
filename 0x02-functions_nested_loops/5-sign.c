#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @c: the character to be checked
 *
 * Return: return 1 if successful 0 if not
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
_putchar('0');
return (0);
}
