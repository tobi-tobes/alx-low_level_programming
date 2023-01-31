#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the pointer to first element in the list
 *
 * Return: pointer to reversed list or NULL if failure
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	prev = NULL;
	next = NULL;

	if (head != NULL && *head != NULL)
	{
		while (*head)
		{
			next = *head;
			*head = (*head)->next;
			next->next = prev;
			prev = next;
		}
		*head = prev;
		return (*head);
	}
	return (NULL);
}
