#include "lists.h"
/**
 * dlistint_len - that returns the number of elements in a linked
 * @h: The head of the doubly linked list
 * Return: The number of nodes in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
