#include "lists.h"
/**
 * list_len - function returns the number of elements in a linked list_t list.
 * @h: the head of the list
 * Return: the numbers of list;
 */
size_t list_len(const list_t *h)
{
	const list_t *ptr = h;
	size_t size = 0;

	while (ptr != NULL)
	{
		size++;
		ptr = ptr->next;
	}
	return (size);
}
