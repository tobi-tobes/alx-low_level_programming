#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data of a dlistint_t linked list.
 * @head: pointer to first element in the list
 *
 * Return: Sum or 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	if (head->prev != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
	}
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
