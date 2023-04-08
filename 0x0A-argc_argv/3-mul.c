#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints it's name
 * @argc: size
 * @argv: array
 *
 * Return: 0
 */
int main(int argc, char **argv)

{
	int x, y, mul;

	if (argc == 3)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		mul = x * y;
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
