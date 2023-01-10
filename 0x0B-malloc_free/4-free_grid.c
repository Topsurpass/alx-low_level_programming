#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - free 2 dimensional grid previously
 * created by alloc_grid function
 * @grid: the 2 dimensional grid
 * @height: the height of the grid
 *
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		free(grid);
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
