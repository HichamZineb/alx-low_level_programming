#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Frees a list
 * @head: Pointer tho the list
 *
 * Return: Nothing
 */
void free_listint(listint_t *head)

{
	listint_t *temp = head;

	while (temp != NULL)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}
