#include "lists.h"

/**
 * sum_dlistint - Returns sum of all data (n) of a linked list.
 * @head: Pointer to head.
 *
 * Return: The sum of all the data (n) of a dlistint_t linked list.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
