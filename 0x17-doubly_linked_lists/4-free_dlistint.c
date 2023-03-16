#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: pointer to first element in the list
 *
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	if (head != NULL)
	{
		if (head->next != NULL)
		{
			while (head->next != NULL)
				head = head->next;
		}
		while (head->prev != NULL)
		{
			head = head->prev;
			free(head->next);
		}
		free(head);
	}
}
