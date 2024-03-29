#include "lists.h"

/**
 * sum_dlistint - the sum of all the data (n)
 * @head: pointer of struct head
 * Return: the sum of all data(n)
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
