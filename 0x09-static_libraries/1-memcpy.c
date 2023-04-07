#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination
 * @src: source
 * @n:
 *
 * Return: returns dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int i;
	/*unsigned int j;*/

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

