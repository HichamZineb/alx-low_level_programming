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

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0' ; j++)
		{
			if (accept[i] == s[j])
			{
				l++;
				break;
			}
		}
	}
	return (l + 1);
}
