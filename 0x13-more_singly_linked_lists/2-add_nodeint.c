#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: head
 * @n: const int
 * Return: *head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *New_nodo;

	if (head == NULL || n == 0)
	{
		return (NULL);
	}
	New_nodo = malloc(sizeof(listint_t));
	if (New_nodo == NULL)
	{
		return (NULL);
	}
	New_nodo->n = n;
	New_nodo->next = (*head);
	(*head) = New_nodo;
	return (*head);
}
