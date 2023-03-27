#include <stdio.h>

/**
 * main - To determine the dynamic size of int, float and char.
 *
 * Return: return 0.
 */
int main(void)

{
	int n;

	printf("Size of 'char'on this computer: %lu bytes\n", sizeof(char));
	printf("Size of 'int' on this computer: %lu bytes\n", sizeof(int));
	printf("Size of 'float' on this computer: %lu bytes\n", sizeof(float));
	printf("Size of the variable 'n' on this computer: %lu bytes\n", sizeof(n));
	return (0);
}
