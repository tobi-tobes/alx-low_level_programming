#include "search_algos.h"

/**
 * jump_list - searches for a value in a sorted list of integers
 * using the Jump search algorithm
 * @list: pointer to the head of the list to search in
 * @size: number of nodes in list
 * @value: value to search for
 *
 * Return: a pointer to the first node where value is located or NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *prev, *curr, *i, *j;
	int step;

	if (list == NULL || size == 0)
		return (NULL);

	step = sqrt(size);

	for (i = list; i->next != NULL; i = i->next)
	{
		if (i->index % step == 0)
		{
			if (i->index != 0)
				printf("Value checked at index [%ld] = [%d]\n",
				       i->index, i->n);
			if (i->n >= value)
				break;
			prev = i;
		}
	}
	curr = i;

	if (curr->next == NULL)
		printf("Value checked at index [%ld] = [%d]\n", curr->index,
		       curr->n);
	printf("Value found between indexes [%ld] and [%ld]\n", prev->index,
	       curr->index);

	for (j = prev; j != curr->next && j->index < size; j = j->next)
	{
		printf("Value checked at index [%ld] = [%d]\n", j->index, j->n);
		if (j->n == value)
			return (j);
	}
	return (NULL);
}
