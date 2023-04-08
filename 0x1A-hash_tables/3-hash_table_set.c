#include "hash_tables.h"

/**
 * update_key - updates a key.
 * @item: item whose value is to be updated
 * @value: value to be put
 *
 * Return: nothing
 */
void update_key(hash_node_t *item, const char *value)
{
	char *update, *holder;

	update = malloc((sizeof(char) * strlen(value)) + 1);
	if (update == NULL)
		return;
	strcpy(update, value);
	holder = item->value;
	item->value = update;
	free(holder);
}


/**
 * hash_table_set - adds an element to the hash table.
 * @ht: hash table to update or be added to
 * @key: the key of the new element
 * @value: value associated with the key
 *
 * Return: 1 if successful or 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *temp, *new_item;

	if (strlen(key) == 0 || ht == NULL)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] != NULL && strcmp(ht->array[index]->key, key) == 0)
	{
		update_key(ht->array[index], value);
		return (1);
	}
	else if (ht->array[index] != NULL && ht->array[index]->next != NULL)
	{
		for (temp = ht->array[index]->next; temp != NULL;
		     temp = temp->next)
		{
			if (strcmp(temp->key, key) == 0)
			{
				update_key(ht->array[index], value);
				return (1);
			}
		}
	}
	new_item = malloc(sizeof(hash_node_t));
	if (new_item == NULL)
		return (0);
	new_item->key = malloc((sizeof(char) * strlen(key)) + 1);
	new_item->value = malloc((sizeof(char) * strlen(value)) + 1);
	if (new_item->key == NULL || new_item->value == NULL)
		return (0);
	strcpy(new_item->key, key);
	strcpy(new_item->value, value);
	temp = ht->array[index];
	ht->array[index] = new_item;
	new_item->next = temp;
	return (1);
}
