#include "lists.h"
/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: the head of the list
 * Return: the numbers of list;
 */
size_t print_list(const list_t *h)
{
	const list_t *ptr = h;
	size_t size = 0;

	while (ptr != NULL)
	{
		if (ptr->str != NULL)
			printf("[%d] %s\n", ptr->len, ptr->str);
		else
			printf("[0] (nil)\n");
		size++;
		ptr = ptr->next;
	}
	return (size);
}
