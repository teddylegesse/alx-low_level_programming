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
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		size++;
	}
	return (size);
}
