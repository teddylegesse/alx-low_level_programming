#include "lists.h"
/**
 * listint_len - function returns the number of elements
 * in a linked listint_t list.
 * @h: pointer to the head of the listint_len link list
 * Return: the lenght of the link list
 *
 */
size_t listint_len(const listint_t *h)
{
	size_t len;

	for (len = 0; h != NULL; len++)
	{
		h = h->next;
	}
	return (len);
}
