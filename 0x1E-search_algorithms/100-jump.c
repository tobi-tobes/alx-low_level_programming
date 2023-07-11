#include "search_algos.h"

/**
 * jump_search - searches for a value in an array of integers using
 * the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the first index where value is located or -1 on failure
 */
int jump_search(int *array, size_t size, int value)
{
	int step, prev = 0, curr, j, len;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);

	for (i = 0; i < size; i += step)
	{
		if (array[i] >= value)
			break;

		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		prev = i;
	}
	curr = i;
	len = size;
	printf("Value found between indexes [%d] and [%d]\n", prev, curr);

	for (j = prev; j <= curr && j < len; j++)
	{
		printf("Value checked array[%d] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
	}
	return (-1);
}
