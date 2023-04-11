#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 *
 * Return: array s
 */
char *_strdup(char *str)

{
	char *s;
	int l = 1, i = 0;

	if (str == NULL)
		return (NULL);

	/* Allocate memory for duplicate */
	while (str[l])
		l++;

	s = malloc((sizeof(char) * l) + 1);

	/* copy string */
	if (s == NULL)
		return (NULL);

	while (i < l)
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
