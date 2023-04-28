#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Adds a new node at the end of thelist
 * @head: pointer to apointer to the list
 * @n: data
 *
 * Return: Adress of the new element or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)

{
	listint_t *temp;
	listint_t *ptr = *head;

	temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}

	while (ptr->next != NULL)
		ptr = ptr->next;

	ptr->next = temp;

	return (temp);
}
