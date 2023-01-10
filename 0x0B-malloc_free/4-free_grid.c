#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: grid to be freed
 * @height: number of rows
 *
 *
 * Return: pointer to combined string if successful, otherwise NULL
 */
void free_grid(int **grid, int height)
{
	if (height > 0)
	{
		int j;

		for (j = 0; j < height; j++)
		{
			free(grid[j]);
		}
	}
	free(grid);
}
