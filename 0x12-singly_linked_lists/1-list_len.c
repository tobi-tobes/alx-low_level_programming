#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to first element in the list
 *
 * Return: number of nodes in the list
 */
size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}
	return (num);
}
