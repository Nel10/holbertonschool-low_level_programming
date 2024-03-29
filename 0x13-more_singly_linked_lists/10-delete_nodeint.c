#include "lists.h"

/**
 * delete_nodeint_at_index - index of a listint_t linked list.
 * @head: head
 * @index: index
 * Return: 0
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *aux, *old;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	aux = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(aux);
		return (1);
	}
	while (i < index - 1)
	{
		if (aux == NULL)
		{
			return (-1);
		}
		aux = aux->next;
		i++;
	}
	old = aux->next;
	aux->next = old->next;
	free(old);
	return (1);
}
