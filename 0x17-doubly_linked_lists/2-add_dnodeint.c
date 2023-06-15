#include "lists.h"

/**
* add_dnodeint - Adds a new node at the beginning of a list.
* @head: Pointer to a pointer.
* @n: Node data.
*
* Return: Adress of the new element or NULL.
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	new_node->next = *head;
	new_node->prev = NULL;
	new_node->n = n;

	if (*head)
		(*head)->prev = new_node;

	*head = new_node;

	return (new_node);
}
