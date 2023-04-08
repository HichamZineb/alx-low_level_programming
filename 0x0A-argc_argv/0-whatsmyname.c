#include <stdio.h>

/**
 * main - prints it's name
 * @argc: size
 * @argv: array
 *
 * Return: 0
 */
int main(int argc, char **argv)

{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[0]);
	}
	return (0);
}
