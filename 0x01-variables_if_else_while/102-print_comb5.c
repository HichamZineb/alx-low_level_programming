#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - prints if random number is negative, positive or is zero
 *
 * Return: returns 0 if everything is ok
 */

int main(void)

{
	int n1 = '0';
	int n2 = '0';
	int n3 = '0';
	int n4 = '1';
	int newline = '\n';

	while (n1 <= '9')
	{
		while (n2 <= '9')
		{
			while (n3 <= '9')
			{
				while (n4 <= '9')
				{
				putchar(n1);
				putchar(n2);
				putchar(' ');
				putchar(n3);
				putchar(n4);
					if (n1 != '9')
					{
					putchar(',');
					}
				putchar(' ');
				n4++;
				}
			n4 = '0';
			n3++;
			}
		n4 = '0';
		n3 = '0';
		n2++;
		}
	n4 = '0';
	n3 = '0';
	n2 = '0';
	n1++;
	}
putchar(newline);
return (0);
}
