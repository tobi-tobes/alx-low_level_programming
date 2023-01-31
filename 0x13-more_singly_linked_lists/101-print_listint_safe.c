#include "lists.h"

/**
 * print_listint_safe - prints a linked list (safe version)
 * @head: pointer to the pointer to first element in the list
 *
 * Return: number of elements in list or exit with 98 on failure
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num_fast = 0, num_slow = 0;
	const listint_t *fast = head, *slow = head;

	if (head != NULL)
	{
		while (fast != NULL)
		{
			while (num_fast > num_slow)
			{
				if (slow == fast)
				{
					printf("-> [%p] %d\n", (void *)fast,
					       fast->n);
					return (num_fast);
				}
				num_slow++;
				slow = slow->next;
			}
			slow = head;
			num_slow = 0;
			printf("[%p] %d\n", (void *)fast, fast->n);
			num_fast++;
			fast = fast->next;
		}
		return (num_fast);
	}
	exit(98);
}
