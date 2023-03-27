#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 *
 * Return: nothing
 */
void rev_string(char *s)

{
	int n = 0;
	int i, j, t;

	while (s[n] != '\0')
	{
		n++;
	}
	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		t = s[i];
		s[i] = s[j];
		s[j] = t;
	}
}
