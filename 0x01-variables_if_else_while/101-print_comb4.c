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
	int num = '0';
	int numb = '1';
	int nu = '2';
	int newline = '\n';

	while (num <= '7')
	{
		while (numb <= '8')
		{
			while (nu <= '9')
			{
				if (nu > numb && numb > num)
				{
				putchar(num);
				putchar(numb);
				putchar(nu);
					if (num != '7')
					{
					putchar(',');
					putchar(' ');
					}
				}
			nu++;
			}
		nu = numb + 1;
		numb++;
		}
	numb = num + 1;
	num++;
	}
	putchar(newline);
return (0);
}
