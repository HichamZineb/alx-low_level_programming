#include "lists.h"

/**
 * listint_len - Returs the number of elements in a linked list
 * @h: Pointer to the list
 *
 * Return: The number of elements
 */
size_t listint_len(const listint_t *h)

{
	int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
