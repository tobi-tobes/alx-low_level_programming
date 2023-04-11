#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: table to look at
 *
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int i;
	int no_items = 0, compare = 0;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] == NULL)
			continue;
		no_items++;
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] == NULL)
			continue;
		printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
		if (ht->array[i] != NULL)
			compare++;
		if (compare < no_items)
			printf(", ");
		if (ht->array[i]->next != NULL)
		{
			for (temp = ht->array[i]->next; temp != NULL;
			     temp = temp->next)
			{
				printf("'%s': '%s'", temp->key, temp->value);
				printf(", ");
			}
		}
	}
	printf("}\n");
}
