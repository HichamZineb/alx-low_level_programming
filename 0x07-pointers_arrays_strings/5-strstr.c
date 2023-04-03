#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring
 *
 * Return: returns NULL
 */
char *_strstr(char *haystack, char *needle)

{
	int i, j;

	for (i = 0; haystack[i] != '\0'; haystack++)
	{
		for (j = 0; needle[j] != '\0'; needle++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
			else if (j == '\0')
			{
				return (haystack);
			}
		}
	}
	return (NULL);
}
