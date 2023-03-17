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
	int ch = 'z';
	int newline = '\n';

	while (ch >= 'a')
	{
	putchar(ch);
	ch--;
	}
	putchar(newline);
	return (0);
}
