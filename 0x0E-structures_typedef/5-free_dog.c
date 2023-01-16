#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees dogs.
 * @d: the dog struct to be freed
 *
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL && d->owner != NULL)
		{
			free(d->name);
			free(d->owner);
		}
		free(d);
	}
}
