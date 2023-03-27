#include <stdio.h>

/**
 * main - print size of a pointer
 *
 * Return: always 0
 */
int main(void)

{
	int *ptr;
	char *ptr2;

	printf("The size of the pointer 'ptr' is: %lu bytes\n", sizeof(ptr));
	printf("The size of the pointer 'ptr2' is: %lu bytes\n", sizeof(ptr2));
	return (0);

}
