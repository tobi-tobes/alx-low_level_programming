#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer to pointer to first element in the list
 * @idx: index of the list where the new node should be added, starting at 0
 * @n: data of node to be added
 *
 * Return: address of new node or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int counter = 0;
	dlistint_t *temp, *new_node;

	if (h == NULL || (*h) == NULL)
		return (NULL);

	temp = (*h);
	if (temp->prev != NULL)
	{
		while (temp->prev != NULL)
			temp = temp->prev;
	}
	while (temp->next != NULL && counter != idx)
	{
		temp = temp->next;
		counter++;
	}
	if (counter < idx)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = temp->prev;
	new_node->next = temp;
	temp->prev->next = new_node;
	temp->prev = new_node;
	return (new_node);
}