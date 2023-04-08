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
	int i, mul = 1;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
		mul = mul * atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("error");
		return (1);
	}
	return (0);
}
