#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 * @key: key to be hashed
 * @size: size of the array of the hash table
 *
 * Return: index where key/value pair should be stored or size + 1 if key is invalid
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	if (strlen(key) == 0 or size == 0)
		return (size + 1);

	index = hash_djb2(key) % size;
	return (index);
}
