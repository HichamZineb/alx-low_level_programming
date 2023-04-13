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
	unsigned int i = 0, j = 0, l1, l2, l;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/* length of s1 */
	while (s1[i])
		i++;
	l1 = i;
	/* length of s2 */
	while (s2[j])
		j++;
	l2 = j;
	/* allocating memory for s */
	if (n >= l2)
		l = l1 + l2 + 1;
	else
		l = l1 + n + 1;

	s = calloc(sizeof(char), l);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < l1; i++)
	{
		s[i] = s1[i];
	}
	for (i = 0; i < l2; i++)
	{
		s[l1 + i] = s2[i];
	}
	s[l - 1] = '\0';
	return (s);
}
