#include "lists.h"
/**
 * free_list - function that frees a list_t list.
 * @head: the head of the list
 */
void free_list(list_t *head)
{
	list_t *_free_list;

	while (head)
	{
		_free_list = head;
		head = head->str;
		free(head);
		head = _free_list;
	}
}
