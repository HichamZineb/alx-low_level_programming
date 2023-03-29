#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination
 * @src: source
 * @n: number of characters to add
 *
 * Return: Value
 */
char *_strncat(char *dest, char *src, int n)

{
	int l, i;

	for (l = 0; dest[l] != '\0'; l++)

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[l] = src[i];
		l++;
		i++;
	}
	dest[l] = '\0';
	return (dest);
}
