#include "lists.h"
#include <stdlib.h>

/**
 * poplistint - Deletes the head node of a linked list
 * @head: Pointer to a pointer to the list
 *
 * Return: Head node's data
 */
int pop_listint(listint_t **head)

{
	int n = (*head)->n;
	listint_t *temp = *head;

	if (*head == NULL)
		return (0);

	*head = temp->next;
	free(temp);
	return (n);
}
