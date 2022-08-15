#include "lists.h"
/**
 * add_nodeint - function that adds a new node at the
 * beginning of a listint_t list.
 * @head: pointer pointes the addres of the head of the list
 * @n: the integer paramemetr which the new add node
 * Return: the new added node to the list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
