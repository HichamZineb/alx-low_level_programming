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
	int nb = '1';
	int num = '0';
	int comma = ',';
	int space = ' ';
	int newline = '\n';

	while (num <= '8')
	{
		while (nb <= '9')
		{
		putchar(num);
		if (nb + 1 > nb)
		{
		putchar(nb);
		}
		if (nb != '9' || num != '8')
		{
		putchar(comma);
		putchar(space);
		}
		nb++;
		}
	num++;
	nb = num + 1;
	}
	putchar(newline);
return (0);
}
