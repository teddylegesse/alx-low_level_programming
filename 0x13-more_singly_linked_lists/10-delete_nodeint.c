#include "lists.h"
/**
 *  delete_nodeint_at_index -  function that deletes the node
 *  at index index of a listint_t linked list.
 *  @head: pointer to the address of the head of the list
 *  @index: the position of the node to be deleted
 *  Return: return 1 on seccesses or -1 on fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node = *head;
	listint_t *temp;
	unsigned int count;

	if (node == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(node);
		return (1);
	}
	index--;
	for (count = 0; count < index; count++)
	{
		if (node->next == NULL)
			return (-1);
		node = node->next;
	}

	temp = node->next;
	node->next = temp->next;
	free(temp);
	return (1);

}
