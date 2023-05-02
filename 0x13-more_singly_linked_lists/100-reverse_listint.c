#include "lists.h"

/**
 * reverse_listint - Reverses a linked list
 * @head: Pointer to a pointer to the list
 *
 * Return: A pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)

{
	listint_t *ptr1 = NULL;
	listint_t *ptr2 = NULL;

	while (*head != NULL)
	{
		ptr1 = (*head)->next;
		(*head)->next = ptr2;
		ptr2 = *head;
		*head = ptr1;
	}
	*head = ptr2;
	return (*head);
}
