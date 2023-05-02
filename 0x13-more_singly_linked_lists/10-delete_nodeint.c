#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes the node at index of a linked list
 * @head: Pointer to a poiter to the list
 * @index: Index of the node that should be deleted
 *
 * Return: 1 if it succeeds or -1 if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *atindex = NULL;
	listint_t *preindex = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		(*head) = (*head)->next;
		free(atindex);
	}

	while (i != index - 1)
	{
		if (!preindex || !preindex->next)
			return (-1);

		preindex = preindex->next;
		i++;
	}
	atindex = preindex->next;
	preindex->next = atindex->next;
	free(atindex);
	return (1);
}
