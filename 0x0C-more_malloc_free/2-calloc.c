#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: member
 * @size: size
 *
 * Return: nothing
 */
void *_calloc(unsigned int nmemb, unsigned int size)

{
	int i, l;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	l = nmemb * size;
	p = malloc(l);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < l; i++)
		p[i] = 0;

	return (p);
}
