#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a linked list
 * @head: Pointer to the list
 * @index: Index of the node
 *
 * Return: The nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)

{
	unsigned int i = 0;

	while (i != index)
	{
		if (!head)
			return (NULL);
		head = head->next;
		i++;
	}
	return (head);
}
