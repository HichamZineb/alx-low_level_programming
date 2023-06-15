#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes node at index of a linked list.
 * @head: Pointer to pointer.
 * @index: Index of the node that should be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;

	if (!*head)
		return (-1);

	while (index != 0)
	{
		if (!temp)
			return (-1);
		temp = temp->next;
		index--;
	}

	if (temp == *head)
	{
		*head = temp->next;
		if (*head)
			(*head)->prev = NULL;
	}
	else
	{
		temp->prev->next = temp->next;
		if (temp->next)
			temp->next->prev = temp->prev;
	}

	free(temp);
	return (1);
}

