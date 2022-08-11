#include "lists.h"
/**
 * free_list - function that frees a list_t list.
 * @head: the head of the list
 */
void free_list(list_t *head)
{
	list_t *ftmp;

	while (head)
	{
		ftmp = head->next;
		free(head->str);
		free(head);
		head = ftmp;
	}
}
