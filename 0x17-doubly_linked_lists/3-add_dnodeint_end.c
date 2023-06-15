#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: Pointer to pointer.
 * @n: Node data.
 *
 * Return: The address of the new element, or NULL if it failed.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *last_node;

	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	new_node->next = NULL;
	new_node->n = n;

	if (!*head)
	{
		*head = new_node;
		new_node->prev = NULL;
		return (new_node);
	}

	last_node = *head;

	while (last_node->next)
		last_node = last_node->next;

	last_node->next = new_node;
	new_node->prev = last_node;

	return (new_node);
}

