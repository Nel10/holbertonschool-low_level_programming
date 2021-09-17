#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node
 * @head: pointer of struct head
 * @index: variable
 * Return: ntn node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 1; i <= index; i++)
	{
		if (head == NULL)
		{
			return (NULL);
		}
		head = head->next;
	}
	return (head);
}
