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
	dlistint_t *new_node, *temp;

	if (head == NULL)
		return (NULL);

	temp = (*head);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	(*head) = new_node;
	if (temp == NULL)
	{
		new_node->next = NULL;
		return (new_node);
	}
	if (temp->prev != NULL)
	{
		while (temp != NULL)
			temp = temp->prev;
	}
	new_node->next = temp;
	return (new_node);
}
