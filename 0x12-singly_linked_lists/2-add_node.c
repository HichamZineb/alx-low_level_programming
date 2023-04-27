#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - Adds a new node at the beginning of a list
 * @str: String to be duplicated
 * @head: pointer to pointer to list
 *
 * Return: The adress of the new element or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)

{
	list_t *copy;
	unsigned int i = 0;

	while (str[i])
		i++;

	copy = malloc(sizeof(list_t));

	if (!copy)
		return (NULL);

	copy->str = strdup(str);
	copy->len = i;
	copy->next = *head;
	*head = copy;

	return (*head);
}
