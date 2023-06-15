#include "lists.h"

/**
 * dlistint_len - Return the number of elements in a linked list.
 * @h: Pointer to the linked list.
 *
 * Return: Number of elements.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}

	return (n);
