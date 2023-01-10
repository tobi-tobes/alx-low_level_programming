#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2D array of integers
 * @width: number of columns
 * @height: number of rows
 *
 *
 * Return: pointer to combined string if successful, otherwise NULL
 */
int **alloc_grid(int width, int height)
{
	if (width > 0 && height > 0)
	{
		int j, k, l, m;
		int **grid = malloc(sizeof(int *) * height);

		if (grid == NULL)
			return (NULL);
		for(j = 0; j < height; j++)
		{
			grid[j] = malloc(sizeof(int) * width);

			if (grid[j] == NULL)
			{
				for (k = j; k >= 0; k--)
				{
					free(grid[k]);
				}
				free(grid);
				return (NULL);
			}
		}
		for(l = 0; l < height; l++)
		{
			for(m = 0; m < width; m++)
			{
				grid[l][m] = 0;
			}
		}
		return (grid);
	}
	return (NULL);
}
