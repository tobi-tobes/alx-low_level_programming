#include "function_pointers.h"

/**
 * array_iterator - executes a given function on each element of an array.
 * @array: array to be iterated on
 * @size: size of the array
 * @action: pointer to the function you need to use
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t j;

	if (size > 0 && array != NULL && action != NULL)
	{
		for (j = 0; j < size; j++)
		{
			action(array[j]);
		}
	}
}
