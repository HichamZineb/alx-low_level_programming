#include "lists.h"

/**
 * size_t print_dlistint - Prints all the elements of a dlistint_t list.
 * @h: Pointer to the list.
 *
 * Return: The number of nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (n);
}
