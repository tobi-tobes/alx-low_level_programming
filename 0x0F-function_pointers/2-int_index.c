#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: array to be searched
 * @size: number of elements in the array array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: index of found number or -1 otherwise
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (size > 0 && array != NULL && cmp != NULL)
	{
		for (j = 0; j < size; j++)
		{
			if (cmp(array[j]))
				return (j);
		}
		return (-1);
	}
	return (-1);
}
