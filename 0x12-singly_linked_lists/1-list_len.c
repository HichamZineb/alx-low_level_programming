#include <stdio.h>
#include "lists.h"

/**
 * list_len - Returns the number elements in a list
 * @h: Pointer to the list
 *
 * Return: The number of elements
 */
size_t list_len(const list_t *h)

{
	int i;

	for (i = 0; h; i++)
		h = h->next;
	return (i);
}

