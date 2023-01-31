#include "lists.h"
#include <stdlib.h>

/**
 * *add_nodeint - adds a new node at the beginning of a list
 * @head: pointer to the pointer to first element in the list
 * @n: int value to be place into new node
 *
 * Return: pointer to new node or NULL on failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	if (head != NULL)
	{
		temp = malloc(sizeof(listint_t));

		if (temp == NULL)
			return (NULL);

		temp->n = n;
		temp->next = *head;
		*head = temp;

		return (temp);
	}
	return (NULL);
}
