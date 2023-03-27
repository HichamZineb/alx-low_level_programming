#include "main.h"

/**
 * puts_half - prints every other character of a string
 * @str: characters to be printed
 *
 * Return: nothing
 */
void puts_half(char *str)

{
	int n = 0;
	int i;

	while (str[n] != '\0')
	{
		n++;
	}
	if (n % 2 == 1)
	{
		i = (n - 1) / 2;
		i += 1;
	}
	else
	{
		i = n / 2;
	}
	for (i = n / 2; i < n; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

}
