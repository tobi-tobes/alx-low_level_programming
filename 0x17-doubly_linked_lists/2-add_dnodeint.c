#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: pointer to pointer to first element in the list
 * @n: data to add to node
 *
 * Return: address of new element or NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	if ((*head) == NULL)
	{
		(*head) = new_node;
		new_node->next = NULL;
	}
	else if ((*head) != NULL && (*head)->prev == NULL)
	{
		new_node->next = (*head);
		(*head)->prev = new_node;
		(*head) = new_node;
	}
	else if ((*head) != NULL && (*head)->prev != NULL)
	{
		while ((*head)->prev != NULL)
			(*head) = (*head)->prev;
		new_node->next = (*head);
		(*head)->prev = new_node;
		(*head) = new_node;
	}
	return (new_node);
}
