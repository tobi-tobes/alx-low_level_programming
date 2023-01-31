#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: pointer to the pointer to first element in the list
 * @index: the index of the node, starting at 0
 *
 * Return: the nth node or NULL if failure
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int counter = 0;

	if (head != NULL)
	{
		while (head)
		{
			if (counter == index)
				return (head);

			head = head->next;
			counter++;
		}
	}
	return (NULL);
}
