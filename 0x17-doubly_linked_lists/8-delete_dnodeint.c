#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list.
 * @head: pointer to the list.
 * @index: position of the node to delete.
 * Returns: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux_node = *head;
	dlistint_t *node_to_delete = *head;
	unsigned int idx;
	unsigned int count = 0;

	/* Check if the list is empty. If it is, there is nothing to delete. */
	if (*head == NULL)
	{
		return (-1);
	}

	/* Check if the index is out of bounds. If it is, return -1. */
	if (index >= dlistint_size(*head))
	{
		return (-1);
	}

	/* Border case for delete at the beginning */
	if (index == 0)
	{
		/* Set the head to the next node. */
		*head = node_to_delete->next;

		/* Free the node to be deleted. */
		free(node_to_delete);

		/* Return 1 to indicate success. */
		return (1);
	}

	/* Search for the node to delete. */
	idx = index - 1;
	while (aux_node && count != idx)
	{
		/* Increment the count. */
		count++;

		/* Move to the next node. */
		aux_node = aux_node->next;
	}

	/* General case */
	if (count == idx)
	{
		/* Get the node to delete. */
		node_to_delete = aux_node->next;

		/* If the node to delete has a next node, set the next node's previous node to the current node. */
		if (node_to_delete->next)
		{
			node_to_delete->next->prev = aux_node;
		}

		/* Set the current node's next node to the node to delete's next node. */
		aux_node->next = node_to_delete->next;

		/* Free the node to be deleted. */
		free(node_to_delete);

		/* Return 1 to indicate success. */
		return (1);
	}

	/* Return -1 to indicate failure. */
	return (-1);
}
