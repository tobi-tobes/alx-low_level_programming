#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
* _strlen - returns the length of a string
* @s: the string whose length will be checked
*
* Return: the length of the given string
*/
int _strlen(char *s)
{
	int len, i;

	len = 0;

	for (i = 0; s[i]; i++)
	{
		len++;
	}
	return (len);
}

/**
* _strcpy - copies the string pointed to by src to buffer pointed to by dest.
* @dest: destination of copying
* @src: source of copying
*
* Return: pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';
	return (dest);
}

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
	dog_t *dog;
	int name_len, owner_len;
	name_len = owner_len = 0;

	if (name != NULL && owner != NULL)
	{
		dog = malloc(sizeof(dog_t));

		if (dog == NULL)
			return (NULL);

		name_len = _strlen(name) + 1;
		owner_len = _strlen(owner) + 1;

		dog->name = malloc(sizeof(char) * name_len);

		if (dog->name == NULL)
			return (NULL);

		dog->owner = malloc(sizeof(char) * owner_len);

		if (dog->owner == NULL)
			return (NULL);

		dog->name = _strcpy(dog->name, name);
		dog->age = age;
		dog->owner = _strcpy(dog->owner, owner);
		return (dog);
	}
	return (NULL);
}
