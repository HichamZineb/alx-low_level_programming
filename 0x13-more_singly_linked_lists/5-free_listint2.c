#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint2 - Frees a list
 * @head: Pointer tho the list
 *
 * Return: Nothing
 */
void free_listint2(listint_t **head)

{
	listint_t *ptr = *head;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		ptr = ptr->next;
		free(*head);
		*head = ptr;
	}
	*head = NULL;
}
