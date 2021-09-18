#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node
 * @h: head
 * @idx: index
 * @n: node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *previous, *current;
	unsigned int i = 0;

	if (*h == NULL && idx != 0)
	{
		return (NULL);
	}
	if (idx == 0)
		return (add_dnodeint(h, n));
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	current = *h;
	previous = NULL;
	while (current != NULL)
	{
		if (i == idx)
		{
			previous->next = new_node;
			new_node->prev = previous;
			new_node->next = current;
			current->prev = new_node;
			return (new_node);
		}
		if ((i == idx - 1) && (current->next == NULL))
		{
			current->next = new_node;
			new_node->prev = current;
			return (new_node);
		}
		previous = current;
		current = previous->next;
		i++;
	}
	return (new_node);
}
