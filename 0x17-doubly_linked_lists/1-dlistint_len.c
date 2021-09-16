#include "lists.h"

/**
 * dlistint_len - the number of elements in a linked dlistint_t list
 * @h: pointer of struct
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int num = 0;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}
	return (num);
}
