#include "lists.h"
/**
 * add_nodeint_end - function that adds a new node
 * at the end of a listint_t list.
 * @head: pointer points to the addres of thr head node
 * @n: integer parameter to the new added node
 * Return: the node added  at the end of the list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *last_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		last_node = *head;
		while (last_node->next != NULL)
			last_node = last_node->next;
		last_node->next = new_node;
	}
	return (new_node);

}
