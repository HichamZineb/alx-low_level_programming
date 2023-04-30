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

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	if (sum == '\0')
		return (0);

	return (sum);
}
