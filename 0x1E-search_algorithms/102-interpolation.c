#include "search_algos.h"

/**
 * interpolation_search - searches for a value in an array of integers using
 * the Interpolation search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the first index where value is located or -1 on failure
 */
int interpolation_search(int *array, size_t size, int value)
{
	int pos, l, h;

	if (array == NULL || size == 0)
		return (-1);

	l = 0;
	h = size - 1;

	if (value <= array[l] || value >= array[h])
	{
		pos = l + (((double)(h - l) / (array[h] - array[l])) *
			   (value - array[l]));
		printf("Value checked array[%d] is out of range\n", pos);
		return (-1);
	}

	while (l <= h)
	{
		pos = l + (((double)(h - l) / (array[h] - array[l])) *
			   (value - array[l]));
		printf("Value checked array[%d] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);

		if (array[pos] < value)
			l = pos + 1;
		else
			h = pos - 1;
	}
	return (-1);
}
