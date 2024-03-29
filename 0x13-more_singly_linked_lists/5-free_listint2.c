#include "lists.h"

/**
 * free_listint2 - frees a list_t list and points the head to NULL
 * @head: pointer to the pointer to first element in the list
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head != NULL)
	{
		while (*head != NULL)
		{
			temp = *head;
			*head = (*head)->next;
			free(temp);
		}
		free(*head);
		head = NULL;
	}
}
