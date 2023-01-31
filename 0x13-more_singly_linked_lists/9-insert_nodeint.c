#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to the pointer to first element in the list
 * @idx: index of the list where the new node should be added
 * @n: value to be added into node
 *
 * Return: the new node or NULL if failure
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp;
	unsigned int counter = 1;

	if (head != NULL)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);

		new_node->n = n;

		if (idx != 0)
		{
			temp = *head;
			while (temp)
			{
				if (counter == idx)
				{
					new_node->next = temp->next;
					temp->next = new_node;

					return (new_node);
				}
				temp = temp->next;
				counter++;
			}
			if (idx > counter)
				return (NULL);
		}
		new_node->next = *head;
		*head = new_node;

		return (new_node);
	}
	return (NULL);
}
