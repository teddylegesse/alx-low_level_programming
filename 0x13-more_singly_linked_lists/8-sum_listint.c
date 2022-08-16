#include "lists.h"
/**
 * sum_listint - function that returns the sum of
 * all the data (n) of a listint_t linked list.
 * @head: pointer to head of the link list
 * Return: the sume of  all nodes of data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);

}
