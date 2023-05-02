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
	listint_t *atindex = *head;
	listint_t *preindex = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		(*head) = (*head)->next;
		free(atindex);
		atindex = NULL;
	}

	while (atindex)
	{
		if (i == index - 1)
		{
			preindex = atindex;
			atindex = atindex->next;
			preindex->next = atindex->next;
			free(atindex);
			atindex = NULL;
			return (1);
		}
		atindex = atindex->next;
		i++;
	}
	return (-1);
}
