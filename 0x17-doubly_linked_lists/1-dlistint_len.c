#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: pointer to first element in the list
 *
 * Return: number of elements in a list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t length = 0;

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
