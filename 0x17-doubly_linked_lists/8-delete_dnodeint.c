#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list.
 * @head: pointer to the list.
 * @index: position of the node to delete.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *helper_node = *head;
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
		node_to_delete = *head;
		*head = node_to_delete->next;
		if (*head)
		{
			(*head)->prev = NULL;
		}
		free(node_to_delete);
		return (1);
	}

	/* Search for the node to delete */
	idx = index - 1;
	while (helper_node && count != idx)
	{
		count++;
		helper_node = helper_node->next;
	}

	/* General case */
	if (count == idx)
	{
		node_to_delete = helper_node->next;
		if (node_to_delete->next)
		{
			node_to_delete->next->prev = helper_node;
		}
		helper_node->next = node_to_delete->next;
		free(node_to_delete);
		return (1);
	}

	return (-1);
}
