#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes the head node of a linked list
 * @head: Pointer to a pointer to the list
 *
 * Return: Head node's data
 */
int pop_listint(listint_t **head)

{
	int n;
	listint_t *temp = *head;

	if (*head == NULL)
		return (0);
	n = (*head)->n;
	*head = temp->next;
	free(temp);
	temp = NULL;
	return (n);
}
