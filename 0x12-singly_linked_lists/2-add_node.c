#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list
 * @head: pointer to the pointer to first element in the list
 * @str: string to be duplicated into new node
 *
 * Return: pointer to new node or NULL on failure
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	unsigned int length = 0;
	int i;

	if (head != NULL && str != NULL)
	{
		temp = malloc(sizeof(list_t));

		if (temp == NULL)
			return (NULL);

		for (i = 0; str[i] != '\0'; i++)
		{
			length++;
		}

		temp->str = strdup(str);
		temp->len = length;
		temp->next = *head;
		*head = temp;

		return (temp);
	}
	return (NULL);
}
