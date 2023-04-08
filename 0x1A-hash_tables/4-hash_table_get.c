#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: table to look at
 * @key: key you're looking for
 *
 * Return: value associated with key or NULL on failure
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp;

	if (strlen(key) == 0 || ht == NULL)
		return (NULL);

	index = key_index(key, ht->size);
	if (ht->array[index] == NULL)
		return (NULL);
	else if (strcmp(ht->array[index]->key, key) == 0)
		return (ht->array[index]->value);
	else if (ht->array[index]->next != NULL)
	{
		for (temp = ht->array[index]->next; temp != NULL;
		     temp = temp->next)
		{
			if (strcmp(temp->key, key) == 0)
				return (temp->value);
		}
	}
	return (NULL);
}
