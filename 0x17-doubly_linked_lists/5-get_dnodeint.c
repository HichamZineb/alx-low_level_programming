#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 * @head: Pointer to head.
 * @index: The index of the nth node.
 *
 * Return: The nth node of a dlistint_t linked list.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (index != 0)
	{
		if (!head)
			return (NULL);
		head = head->next;
		index--;
	}

	return (head);
}
