#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: pointer to first element in the list
 *
 * Return: number of elements in a list
 */
unsigned int dlistint_len(const dlistint_t *h)
{
	unsigned int length = 0;

	if (h == NULL)
		return (0);

	if (h->prev != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}
	while (h != NULL)
	{
		length++;
		h = h->next;
	}
	return (length);
}

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

	if (h == NULL)
		return (NULL);

	if ((*h) == NULL && idx == 0)
		return (add_dnodeint(h, n));
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
	if (temp->next == NULL && idx == dlistint_len((*h)))
		return (add_dnodeint_end(h, n));
	if (counter < idx)
		return (NULL);

	if (temp->prev == NULL)
		return (add_dnodeint(h, n));

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
