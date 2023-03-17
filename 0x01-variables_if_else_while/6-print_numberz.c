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
	int ch = '0';
	int newline = '\n';

	while (ch <= '9')
	{
	putchar(ch);
	ch++;
	}
	putchar(newline);
	return (0);
}
