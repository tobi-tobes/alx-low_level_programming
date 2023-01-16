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
		if (!(d->name))
			printf("Name: %s\n", "(nil)");
		else
			printf("Name: %s\n", d->name);
		if (!(d->age))
			printf("Age: %s\n", "(nil)");
		else
			printf("Age: %f\n", d->age);
		if (!(d->owner))
			printf("Owner: %s\n", "(nil)");
		else
			printf("Owner: %s\n", d->owner);
	}
}
