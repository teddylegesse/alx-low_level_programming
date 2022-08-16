#include "lists.h"
/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: pointer which the head of the ist
 * Return: numbers of lists
 *
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *ptr = h;
	size_t size = 0;

	while (ptr != NULL)
	{
		size++;
		printf("%d\n", h->n);
		ptr = ptr->next;
	}
	return (size);
}
