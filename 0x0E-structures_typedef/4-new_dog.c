#include <stdio.h>
#include "dog.h"

/**
 * new_dog - creates a new dog.
 *@name: name of the dog
 *@age: age of the dog
 *@owner: owner of the dog
 *
 * Return: a dog struct or NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog_t dog;

	dog = malloc(sizeof(struct dog_t));

	if (dog == NULL)
		return (NULL);
	dog->name = name;
	dog->age = age;
	dog->owner = owner;
	return (dog);
}
