#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer of struct head
 * @idx: index
 * @n: node
 * Return: new_node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *next, *current;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);
	if (idx != 0)
	{
		current = *h;
		while (i < idx - 1 && current != NULL)
			current = current->next;
		if (current == NULL)
		{
			return (NULL);
		}
	}
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		next = *h;
		*h = new_node;
		new_node->prev = NULL;
	}
	else
	{
		new_node->prev = current;
		next = current->next;
		current->next = new_node;
	}
	new_node->next = next;
	if (new_node != NULL)
		new_node->next->prev = new_node;
	return (new_node);
}
