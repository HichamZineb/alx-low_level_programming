#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Adds a new node at the beginning of a list
 * @head: pointer to a poiter to the list
 * @n: data
 *
 * Return: Adress of the new element or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)

{
	listint_t *ptr = malloc(sizeof(listint_t));

	if (!ptr)
		return (NULL);
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}

