#include "main.h"

/**
 * jack_bauer - prints the last digit of a number
 * @n: the character to be checked
 * last_digit - claculate the last digit
 *
 * Return: returns last digit
 */

void jack_bauer(void)
{
	int n1 = '0';
	int n2 = '0';
	int n3 = '0';
	int n4 = '1';
	int newline = '\n';

	while (n1 <= '2')
	{
		if (n1 == '2')
		{
			while (n2 <= '3')
			{
				while (n3 <= '5')
				{
					while (n4 <= '9')
					{
					_putchar(n1);
					_putchar(n2);
					_putchar(':');
					_putchar(n3);
					_putchar(n4);
					_putchar(newline);
					n4++;
					}
				n4 = '0';
				n3++;
				}
			n4 = '0';
			n3 = '0';
			n2++;
			}
		}
		else
		{
			while (n2 <= '9')
			{
				while (n3 <= '5')
				{
					while (n4 <= '9')
					{
					_putchar(n1);
					_putchar(n2);
					_putchar(':');
					_putchar(n3);
					_putchar(n4);
					_putchar(newline);
					n4++;
					}
				n4 = '0';
				n3++;
				}
			n4 = '0';
			n3 = '0';
			n2++;
			}
		}
	n4 = '0';
	n3 = '0';
	n2 = '0';
	n1++;
	}
}
