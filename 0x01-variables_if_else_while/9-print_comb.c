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
	int nb = '0';
	int comma = ',';
	int space = ' ';
	int newline = '\n';

	while (nb <= '9')
	{
	putchar(nb);
	if (nb != '9')
	{
	putchar(comma);
	putchar(space);
	}
	nb++;
	}
	putchar(newline);
	return (0);
}
