#include "search_algos.h"

/**
 * binary_search - searches for a value in an array of integers using
 * the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the first index where value is located or -1 on failure
 */
int binary_search(int *array, size_t size, int value)
{
	int l, h, m, i;

	if (array == NULL || size == 0)
		return (-1);

	l = 0;
	h = size - 1;

	while (l <= h)
	{
		printf("Searching in array: ");
		for (i = l; i <= h; i++)
		{
			printf("%d", array[i]);
			if (i != h)
				printf(", ");
		}
		printf("\n");

		m = (l + h) / 2;

		if (array[m] == value)
			return (m);

		if (array[m] < value)
			l = m + 1;
		else
			h = m - 1;
	}
	return (-1);
}
