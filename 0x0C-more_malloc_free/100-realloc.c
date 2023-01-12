#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with a call to malloc
 * @old_size: size in bytes of the allocated space for ptr
 * @new_size: new size, in bytes of the new memory block
 *
 * Return: pointer to array if successful or NULL otherwise
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *np;
	unsigned int i;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		np = malloc(new_size);
		if (np == NULL)
			return (NULL);
		free(ptr);
		return (np);
	}
	if (new_size == old_size)
		return (ptr);
	np = malloc(new_size);
	i = 0;

	while (i < new_size && i < old_size)
	{
		np[i] = ((char *) ptr)[i];
		i++;
	}
	free(ptr);
	return (np);
}
