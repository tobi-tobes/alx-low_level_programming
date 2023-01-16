#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 *@d: name of the struct to be printed
 *
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: %s\n", "(nil)");
		else
			printf("Name: %s\n", d->name);
		if (!(d->age))
			printf("Age: (nil)\n");
		else
			printf("Age: %f\n", d->age);
		if (d->owner == NULL)
			printf("Owner: %s\n","(nil)");
		else
			printf("Owner: %s\n", d->owner);
	}
}
