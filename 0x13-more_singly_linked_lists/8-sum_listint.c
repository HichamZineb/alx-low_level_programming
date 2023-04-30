#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data of a list
 * @head: Pointer to the list
 *
 * Return: The sum of the data
 */
int sum_listint(listint_t *head)

{
	int sum = 0;

	if (!head)
		return (0);

	while (head->next != NULL)
	{
		head = head->next;
		sum += head->n;
	}
	return (sum);
}
