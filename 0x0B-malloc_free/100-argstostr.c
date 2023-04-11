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
			l++;
		}
		l += ac;
	}
	conc = malloc(sizeof(char) * l + 1);
	if (conc == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			conc[k] = av[i][j];
			k++;
		}
		if (conc[k] == '\0')
			conc[k++] = '\n';
	}
	return (conc);
}
