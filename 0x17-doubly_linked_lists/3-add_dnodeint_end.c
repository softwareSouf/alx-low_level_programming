#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: pointer to the first element of the list.
 * @n: int to set in the new node.
 * Return: address of the new element, or NULL if it failed
 **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *helper = *head;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;

	if (helper)
	{
		while (helper->next)
			helper = helper->next;
		node->prev = helper;
		helper->next = node;
	}
	else
	{
		*head = node;
		node->prev = NULL;
	}

	return (node);
}
