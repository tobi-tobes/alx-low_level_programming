#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at given index
 * @head: pointer to pointer to first element in the list
 * @index: index of the node that should be deleted, starting at 0
 *
 * Return: 1 if successful, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int counter = 0;
	dlistint_t *temp;

	if (head == NULL || (*head) == NULL)
		return (-1);

	temp = (*head);
	if (temp->prev != NULL)
	{
		while (temp->prev != NULL)
			temp = temp->prev;
	}
	while (temp->next != NULL && counter != index)
	{
		temp = temp->next;
		counter++;
	}
	if (counter < index)
		return (-1);

	if (temp->next == NULL && temp->prev == NULL)
		(*head) = NULL;
	else if (temp->next == NULL && temp->prev != NULL)
		temp->prev->next = NULL;
	else if (temp->prev == NULL && temp->next != NULL)
	{
		(*head) = temp->next;
		temp->next->prev = NULL;
	}
	else
	{
		temp->prev->next = temp->next;
		temp->next->prev = temp->prev;
	}
	free(temp);
	return (1);
}
