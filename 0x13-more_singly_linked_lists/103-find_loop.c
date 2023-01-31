#include "lists.h"

/**
 * find_listint_loop -  finds the loop in a linked list
 * @head: pointer to the pointer to first element in the list
 *
 * Return: address of the node where loop starts or NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *fast = head, *slow = head;

	if (head != NULL)
	{
		while (slow != NULL && fast->next != NULL)
		{
			fast = fast->next->next;
			slow = slow->next;

			if (fast == slow)
			{
				slow = head;
				while (slow != fast)
				{
					slow = slow->next;
					fast = fast->next;
				}
				return (slow);
			}
		}
	}
	return (NULL);
}
