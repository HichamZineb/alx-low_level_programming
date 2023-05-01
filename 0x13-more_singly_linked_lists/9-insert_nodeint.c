#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * @head: Pointer to pointer to list
 * @idx: Given position
 * @n: Data
 *
 * Return: New node or NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *ptr;
	listint_t *node;

	node = malloc(sizeof(listint_t));
	node->n = n;
	node->next = NULL;
	ptr = *head;

	while (i != idx - 1)
	{
		ptr = ptr->next;
		i++;
	}
	node->next = ptr->next;
	ptr->next = node;

	if (node->next != ptr->next && ptr->next != node)
	{
		ptr = *head;
		return (NULL);
	}

	if (!node)
		return (NULL);

	return (node);
}
