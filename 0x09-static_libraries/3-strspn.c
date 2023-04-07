#include "main.h"

/**
 * _strspn - get the length of a prefix substring
 * @s: string
 * @accept: substring
 *
 * Return: returns length
 */
unsigned int _strspn(char *s, char *accept)

{
	unsigned int i, j;
	unsigned int l = 0;

	for (i = 0; s[i] >= '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				l++;
				break;
			}
			else if (accept[j + 1] == '\0')
			{
				return (l);
			}
		}
	}
	return (l);
}
