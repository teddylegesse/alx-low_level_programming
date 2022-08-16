#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list.
 * @head: apointer to the the addres of the head node of link list
 * Return: return null if head is null
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	head = NULL;

}
