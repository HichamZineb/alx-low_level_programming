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
	char nb = '0';
	char ch = 'A';
	char newline = '\n';

	while (nb <= '9')
	{
	putchar(nb);
	nb++;
	}
	while (ch <= 'F')
	{
	putchar (ch);
	ch++;
	}
	putchar(newline);
	return (0);
}
