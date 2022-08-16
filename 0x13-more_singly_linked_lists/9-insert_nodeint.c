#include "lists.h"
/**
 * insert_nodeint_at_index - function inserts a new node at a given position
 * @head: pointer to the address of head
 * @idx: the position of new node inserted
 * @n: integer the new add node contain
 * Return: the address of the new node, or null if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *ptr2 = *head;
	unsigned int count;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	if (idx == 0)
	{
		ptr->next = ptr2;
		*head = ptr;
		return (ptr);
	}
	idx--;

	for (count = 0; count < idx; count++)
	{
		if (ptr2 == NULL || ptr2->next == NULL)
			return (NULL);
		ptr2 = ptr2->next;
	}
	ptr->next = ptr2->next;
	ptr2->next = ptr;

	return (ptr);
}
