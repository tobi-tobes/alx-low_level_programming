#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list
 * @head: pointer to the pointer to first element in the list
 * @str: string to be duplicated into new node
 *
 * Return: pointer to new node or NULL on failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	unsigned int length = 0;
	int i;

	if (str != NULL)
	{
		new_node = malloc(sizeof(list_t));

		if (new_node == NULL)
			return (NULL);

		for (i = 0; str[i] != '\0'; i++)
		{
			length++;
		}

		new_node->str = strdup(str);
		new_node->len = length;
		new_node->next = NULL;

		if (*head == NULL)
		{
			*head = new_node;
			return (*head);
		}
		else
		{
			temp = *head;
			while (temp->next)
			{
				temp = temp->next;
			}
			temp->next = new_node;
			return (new_node);
		}
	}
	return (NULL);
}
