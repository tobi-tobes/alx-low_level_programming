#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the table
 *
 * Return: pointer to new table or NULL on failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table_wrapper;
	hash_node_t **table;
	unsigned long int i;

	if (size == 0)
		return (NULL);

	table_wrapper = malloc(sizeof(hash_table_t));
	if (table_wrapper == NULL)
		return (NULL);
	table_wrapper->size = size;

	table = malloc(sizeof(hash_node_t *) * table_wrapper->size);
	if (table == NULL)
	{
		free(table_wrapper);
		return (NULL);
	}

	for (i = 0; i < table_wrapper->size; i++)
	{
		table[i] = NULL;
	}
	table_wrapper->array = table;
	return (table_wrapper);
}
