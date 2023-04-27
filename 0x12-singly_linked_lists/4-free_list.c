#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a list
 * @head: ùpointer to list
 *
 * Return: Nothing
 */
void free_list(list_t *head)

{

	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
