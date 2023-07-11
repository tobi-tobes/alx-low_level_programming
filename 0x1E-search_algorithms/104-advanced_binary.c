#include "search_algos.h"

/**
 * advanced_binary_rec - searches for a value in an array of integers using
 * the Binary search algorithm recursively
 * @array: pointer to the first element of the array to search in
 * @low: lower search range
 * @high: upper search range
 * @value: value to search for
 *
 * Return: the first index where value is located or -1 on failure
 */
int advanced_binary_rec(int *array, int low, int high, int value)
{
	int m, i, h, l;

	l = low;
	h = high;

	if (h >= l)
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
		if ((m == 0 || array[m - 1] != value) && array[m] == value)
			return (m);

		if (array[m] >= value)
			return (advanced_binary_rec(array, l, m - 1, value));
		else
			return (advanced_binary_rec(array, m + 1, h, value));
	}
	return (-1);
}

/**
 * advanced_binary - searches for a value in an array of integers using
 * the Binary search algorithm (recursively)
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the first index where value is located or -1 on failure
 */
int advanced_binary(int *array, size_t size, int value)
{
	int l, h;

	if (array == NULL || size == 0)
		return (-1);

	l = 0;
	h = size - 1;

	return (advanced_binary_rec(array, l, h, value));
}
