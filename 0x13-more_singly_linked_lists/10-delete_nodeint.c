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
	unsigned int j = 0;
	listint_t  *preindex;
	listint_t *atindex = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		(*head) = (*head)->next;
		free(atindex);
		atindex = NULL;
	}
	else
	{
		preindex = *head;

		while (i != index - 1)
		{
			preindex = preindex->next;
			i++;
		}
		while (j != index)
		{
			atindex = atindex->next;
			j++;
		}
		preindex->next = atindex->next;
		free(atindex);
		atindex = NULL;
	}
	return (1);
}
