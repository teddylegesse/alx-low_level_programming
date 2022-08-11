#include "lists.h"
/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 * @head: apointer pointes to head
 * @str: thes string parameter to added  to the node
 * Return: : the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int length;
	char *_str;

	_str = strdup(str);
	new_node = malloc(sizeof(list_t));

	if (_str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	if (new_node == NULL)
		return (NULL);
	for (length = 0; str[length];)
		length++;
	new_node->str = _str;
	new_node->len = length;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
