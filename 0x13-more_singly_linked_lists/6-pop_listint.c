#include "lists.h"

/**
 * pop_listint - deletes the head node of a list
 * @head: pointer to the pointer to first element in the list
 *
 * Return: the head node's data or 0 if failure
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int tmp;

	if (head != NULL && *head != NULL)
	{
		temp = *head;
		tmp = (*head)->n;
		*head = (*head)->next;
		free(temp);
		return (tmp);
	}
	return (0);
}
