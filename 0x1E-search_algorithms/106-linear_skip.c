#include "search_algos.h"

/**
 * last - finds the last element of a skip list
 * @h: pointer to the first element the list
 *
 * Return: the pointer to the last element of the list
 */
skiplist_t *last(skiplist_t *h)
{
	skiplist_t *last;

	last = h;
	while (last->next != NULL)
		last = last->next;

	return (last);
}

/**
 * linear_skip - searches for a value in a sorted skip list of integers
 * @list: pointer to the head of the skip list to search in
 * @value: value to search for
 *
 * Return: pointer on the first node where value is located or NULL on failure
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *prev, *curr, *i, *j;

	if (list == NULL)
		return (NULL);

	for (i = list; i->express != NULL; i = i->express)
	{
		if (i->index != 0)
			printf("Value checked at index [%ld] = [%d]\n",
			       i->index, i->n);
		if (i->n >= value)
			break;
		prev = i;
	}
	if (i->n < value)
	{
		prev = i;
		curr = last(list);
		printf("Value checked at index [%ld] = [%d]\n", prev->index,
		       prev->n);
	}
	else
	{
		curr = i;
		if (curr->express == NULL)
			printf("Value checked at index [%ld] = [%d]\n",
			       curr->index, curr->n);
	}
	printf("Value found between indexes [%ld] and [%ld]\n", prev->index,
	       curr->index);

	for (j = prev; j != curr->next && j != NULL; j = j->next)
	{
		printf("Value checked at index [%ld] = [%d]\n", j->index, j->n);
		if (j->n == value)
			return (j);
	}
	return (NULL);
}
