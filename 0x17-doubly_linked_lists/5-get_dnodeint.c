#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer to first element in the list
 * @index: index of the node, starting from 0
 *
 * Return: Found node or NULL if node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	if (head == NULL)
		return (NULL);

	if (head->prev != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
	}
	while (head->next != NULL && counter != index)
	{
		head = head->next;
		counter++;
	}
	if (counter < index)
		return (NULL);

	return (head);
}
