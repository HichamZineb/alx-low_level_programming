#include "main.h"

/**
 * main - print alphabet
 *
 * Return: 0 if success
 */
int main(void)

{
	char print_alphabet = 'a';

		while (print_alphabet <= 'z')
		{
			_putchar(print_alphabet);
			print_alphabet++;
		}
		_putchar('\n');
	return (0);
}
