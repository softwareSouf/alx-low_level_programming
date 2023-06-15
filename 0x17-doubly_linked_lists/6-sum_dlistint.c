#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t list.
 * @head: pointer to the list.
 * Return: sum of all data in the list, 0 if the list is empty.
 **/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node;
	int total = 0;

	if (head == NULL)
	{
		return 0;
	}

	node = head;

	while (node != NULL)
	{
		total += node->n;
		node = node->next;
	}

	return total;
}
