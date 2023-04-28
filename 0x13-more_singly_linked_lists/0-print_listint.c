#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all the elements of a list
 * @h: Pointer to the list
 *
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)

{
	int i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
