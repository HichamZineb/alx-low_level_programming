#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
	unsigned int j, sum;
	char *check;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			check = argv[i];
			for (j = 0; j < strlen(check); j++)
			{
				if (check[j] < 48 || check[j] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
			check++;
		}
	}
	printf("%d\n", sum);
	return (0);
}
