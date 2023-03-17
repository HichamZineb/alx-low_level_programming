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
	char CH = 'A';
	char newline = '\n';

	while (ch <= 'z')
	{
	putchar(ch);
	ch++;
	}
	while (CH <= 'Z')
	{
	putchar(CH);
	CH++;
	}
	putchar(newline);
	return (0);
}
