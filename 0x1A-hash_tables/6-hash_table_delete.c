#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: table to look at
 *
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp, *next;
	unsigned long int i;

	if (ht == NULL)
		return;

	if (ht->array == NULL)
	{
		free(ht);
		return;
	}
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] == NULL)
			continue;
		if (ht->array[i]->next != NULL)
		{
			next = ht->array[i]->next;
			while (next != NULL)
			{
				temp = next;
				next = next->next;
				free(temp->key);
				free(temp->value);
				free(temp);
			}
		}
		free(ht->array[i]->key);
		free(ht->array[i]->value);
		free(ht->array[i]);
	}
	free(ht->array);
	free(ht);
}
