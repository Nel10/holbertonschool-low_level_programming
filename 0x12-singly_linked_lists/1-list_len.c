#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: pointer access list_h
 * Return: x
 */
size_t list_len(const list_t *h)
{
	size_t x = 0;

	while (h != NULL)
	{
		x++;
		h = h->next;
	}
	return (x);
}
