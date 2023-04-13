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
	/* length of s1 */
	while (s1[i])
		i++;
	/* length of s2 */
	while (s2[j])
		j++;
	/* allocating memory for s */
	if (n >= j)
		l = i + j + 1;
	else
		l = i + n + 1;

	s = malloc(l + 1);
	if (s == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
	{
		s[k] = s1[k];
	}
	for (k = 0; k < j; k++)
	{
		s[i + k] = s2[k];
	}
	s[k + 1] = '\0';
	return (s);
}
