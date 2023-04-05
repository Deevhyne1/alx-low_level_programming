#include "lists.h"

/**
 * listint_len - returns the xber of elements in a linked lists
 * @h: linked list of type listint_t to traverse
 *
 * Return: xber of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t x = 0;

	while (h)
	{
		x++;
		h = h->next;
	}

	return (x);
}
