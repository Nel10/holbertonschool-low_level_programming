#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list.
 * @head: pointer of struct head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
