#include <stdio.h>
/**
 * main - prints sizes
 *
 * Return: returns 0 if everything is ok
 */
int main(void)

{
	
	char character;
	int integer;
	long int longinteger;
	long long int longlonginteger;
	float afloat;

	printf("Size of a char: %lu\n", sizeof(character));
	printf("Size of an int: %lu\n", sizeof(integer));
	printf("Size of a long int: %lu\n", sizeof(longinteger));
	printf("Size of a long long int: %lu\n", sizeof(longlonginteger));
	printf("Size of a float: %lu\", sizeof(afloat));
	return (0);

}
