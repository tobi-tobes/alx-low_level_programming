#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: pointer to pointer to first element in the list
 * @n: data to add to node
 *
 * Return: address of new element or NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp;

	if (head == NULL)
		return (NULL);

	temp = (*head);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	if (temp == NULL)
	{
		(*head) = new_node;
		new_node->prev = NULL;
		return (new_node);
	}
	if (temp->next != NULL)
	{
		while (temp->next != NULL)
			temp = temp->next;
	}
	new_node->prev = temp;
	temp->next = new_node;
	return (new_node);
}
