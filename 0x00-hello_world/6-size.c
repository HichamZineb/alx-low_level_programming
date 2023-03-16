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

	printf("Size of a char: %zu byte\n", sizeof(character));
	printf("Size of an int: %zu byte\n", sizeof(integer));
	printf("Size of a long int: %zu byte\n", sizeof(longinteger));
	printf("Size of a long long int: %zu byte\n", sizeof(longlonginteger));
	printf("Size of a float: %zu byte\n", sizeof(afloat));
	return (0);

}
