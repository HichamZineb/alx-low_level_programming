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
	int *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(sizeof(nmemb) * size + 1);

	if (p == NULL)
		return (NULL);

	return (p);
}