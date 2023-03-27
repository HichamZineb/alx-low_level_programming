#include "main.h"

/**
 * print_triangle - prints a triangle
 */
void print_triangle(int size)

{
	int a;
	int b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a <= size; a++)
		{
			for (b = size - 1; b != 0; b--)
			{
				_putchar(32);
			}
			_putchar(35);
			_putchar('\n');
		}
	}
}
