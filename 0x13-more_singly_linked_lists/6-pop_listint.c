#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 * and returns the head node’s data (n).
 * @head: pointer pointes to the addres of head node in link list
 * Return: the pop node
 */
int pop_listint(listint_t **head)
{
	listint_t *pop;
	int n;

	if (*head == NULL)
		return (0);
	pop = *head;
	n = (*head)->n;
	*head = (*head)->next;
	free(pop);
	return (n);
}
