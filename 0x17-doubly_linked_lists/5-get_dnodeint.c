#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node
 * @head: pointer of struct head
 * @index: variable
 * Return: ntn node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	while (current->next != NULL)
	{
		if (index == count)
		{
			break;
		}
		current = current->next;
		count++;
	}
	if (current->next == NULL)
	{
		return (NULL);
	}
	return (current);
}
