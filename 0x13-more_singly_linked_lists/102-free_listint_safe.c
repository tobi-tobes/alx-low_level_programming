#include "lists.h"

/**
 * print_listint_safe - frees a linked list (safe version)
 * @head: pointer to the pointer to first element in the list
 *
 * Return: number of elements in list or 0 on failure
 */
size_t free_listint_safe(listint_t **h)
{
	size_t num_fast, num_slow;
	listint_t *fast, *slow, *temp;

	if (h != NULL && *h != NULL)
	{
		fast = slow = temp = *h;
		num_fast = 0;

		while (fast != NULL)
		{
			slow = *h;
			num_slow = 0;

			while (num_fast > num_slow)
			{
				if (slow == temp)
				{
					*h = NULL;
					return (num_fast);
				}
				num_slow++;
				slow = slow->next;
			}
			temp = fast->next;
			free((void *)fast);
			fast = temp;
			num_fast++;
		}
		*h = temp;
		return (num_fast);
	}
	return (0);
}
