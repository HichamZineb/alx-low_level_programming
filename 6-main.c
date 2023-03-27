#include <stdio.h>

/**
 * main - dereferencing pointers, example with int and char types
 *
 * Return: always 0
 */
int main(void)

{
	int n;
	int *p;
	char c;
	char *pp;

	c = 'H';
	pp = &c;
	n = 98;
	p = &n;
	printf("Value of 'c':%d ('%c')\n", c, c);
	printf("Address of 'c': %p\n", &c);
	printf("Value of 'pp': %p\n", pp);
	printf("Value of 'n': %d\n", n);
	printf("Address of 'n': %p\n", &n);
	printf("Value of 'p': %p\n", p);
	*pp = 'o';
	*p = 402;
	printf("Value of 'n': %d\n", n);
	printf("Value of '*pp': %d\n", *pp);
	printf("Value of 'c': %d ('%c')\n", c, c);
	printf("Value of '*pp': %d ('%c')\n", *pp, *pp);
	return (0);

}


