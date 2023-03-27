#include <stdio.h>

/**
 * main - prints the value of n
 *
 * Return: always 0
 */
int main(void)

{
	int n;
	int *p;

	n = 98;
	p = &n;
	printf("The address 'n': %p\n", &n);
	printf("The value of 'p': %p\n", p);
	return (0);

}
