#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: characters to be printed
 *
 * Return: nothing
 */
void puts2(char *str)

{
	int n = 0;
	int i;

	while (str[n] != '\0')
	{
		n++;
	}
	for (i = 0; i < n; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

}
