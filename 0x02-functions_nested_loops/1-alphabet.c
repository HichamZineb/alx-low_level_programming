#include <stdio.h>

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
			putchar(print_alphabet);
			print_alphabet++;
		}
		putchar('\n');
	return (0);
}
