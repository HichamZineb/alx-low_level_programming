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
	char ch = 'a';
	char newline = '\n';

	while (ch <= 'z')
	{
	putchar(ch);
	ch++;
	}
	putchar(newline);
	return (0);
}
