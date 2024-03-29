#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: minimum value in array
 * @max: maximum value in array
 *
 * Return: pointer to array if successful or NULL otherwise
 */
int *array_range(int min, int max)
{
	int *nums, lim, i;

	if (min > max)
		return (NULL);

	lim = (max - min) + 1;
	nums = malloc(sizeof(int) * lim);

	if (nums == NULL)
		return (NULL);
	for (i = 0; i < lim; i++)
	{
		nums[i] = min + i;
	}
	return (nums);
}
