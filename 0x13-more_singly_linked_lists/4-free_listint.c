#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: head
 * Return: 0
 */
void free_listint(listint_t *head)
{
	listint_t *aux;

	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
