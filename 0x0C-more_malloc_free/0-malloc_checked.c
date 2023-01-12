#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocate
 *
 *
 * Return: pointer to memory if successful, otherwise 98
 */
void *malloc_checked(unsigned int b)
{
	void *malloc_ptr;
	malloc_ptr = malloc(b);

	if (malloc_ptr == NULL)
		exit(98);
	return (malloc_ptr);
}
