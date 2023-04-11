#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates arguments
 * @ac: number of arguments
 * @av: argument
 *
 * Return: concatenated string
 */
char *argstostr(int ac, char **av)

{
	int i, j, k = 0, l = 0;
	char *conc;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			k++;
		}
		k += ac;
	}
	conc = malloc(sizeof(char) * k);
	if (conc == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			conc[l] = av[i][j];
			l++;
		}
		if (conc[l] == '\0')
			conc[l++] = '\n';
	}
	return (conc);
}
