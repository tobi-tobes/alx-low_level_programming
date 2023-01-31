#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: pointer to first element in the list
 *
 * Return: number of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}
	return (num);
}
