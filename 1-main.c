#include <stdio.h>

/**
 * main - Adress of variables.
 *
 * Return: always 0.
 */
int main(void)

{
	char c;
	int n;

	printf("Adress of the variable 'c': %p\n", &c);
	printf("Adress of the variable 'n': %p\n", &n);
	return (0);
}
