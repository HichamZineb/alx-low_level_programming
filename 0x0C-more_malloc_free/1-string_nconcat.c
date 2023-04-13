#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates 2 strings
 * @s1: first string
 * @s2: second string
 * @n: first number of bytes of s2
 *
 * Return: concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)

{
	unsigned int i = 0, j = 0, k, l;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;

	while (s2[j])
		j++;

	if (n > j)
		n = j;
	l = i + n;
	s = malloc(l + 1);

	if (s == NULL)
		return (NULL);

	for (k = 0; k < l; k++)
	{
		if (k < i)
			s[k] = s1[k];
		else
			s[k] = s2[k - i];

	}
	s[k] = '\0';
	return (s);
}
