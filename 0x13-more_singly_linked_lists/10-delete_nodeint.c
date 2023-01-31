#include "lists.h"

/**
 * delete_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to the pointer to first element in the list
 * @index: index of the node that should be deleted
 *
 * Return: 1 if success or -1 if failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp1, *temp2;
	unsigned int counter = 1;

	temp1 = *head;

	if (head != NULL && *head != NULL)
	{
		if (index != 0)
		{
			temp2 = *head;

			while (temp2)
			{
				if (counter == index)
				{
					temp1 = temp2->next;
					temp2->next = temp1->next;

					free(temp1);
					return (1);
				}
				temp2 = temp2->next;
				counter++;
			}
			if (index > counter)
				return (-1);
		}
		*head = temp1->next;
		free(temp1);

		return (1);
	}
	return (-1);
}
