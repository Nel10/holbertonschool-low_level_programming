#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: head
 * Return: 0
 */
void free_listint2(listint_t **head)
{
	listint_t *aux;

	if (head == NULL || *head == NULL)
		return;
	while ((*head)->next != NULL)
	{
		aux = (*head)->next;
		free(*head);
		*head = aux;
	}
	free(*head);
	*head = NULL;
}
