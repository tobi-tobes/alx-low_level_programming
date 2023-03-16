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
	dlistint_t *new_node, *temp;

	if (h == NULL || (*h) == NULL)
		return (NULL);

	if ((*h)->prev != NULL)
	{
		while ((*h)->prev != NULL)
			(*h) = (*h)->prev;
	}
	temp = (*h);
	while (temp->next != NULL && counter != idx)
	{
		temp = temp->next;
		counter++;
	}
	if (counter < idx)
		return (NULL);

	if (temp->prev == NULL)
		return (add_dnodeint(h, n));
	else if (temp->next == NULL && temp->prev != NULL)
		return (add_dnodeint_end(h, n));
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = temp;
	new_node->prev = temp->prev;
	temp->prev->next = new_node;
	temp->prev = new_node;
	return (new_node);
}
