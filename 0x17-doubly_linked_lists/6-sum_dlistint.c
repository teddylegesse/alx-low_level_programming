#include "lists.h"
/**
 * sum_dlistint - function that returns the sum of all the data (n)
 * @head: The head of the dlistint_t list.
 * Return: if the list is empty, return 0 otherwise return sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
