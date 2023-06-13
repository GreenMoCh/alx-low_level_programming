#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2D grid created by alloc_grid
 *
 * @grid: the 2D array to be freed
 * @height: the height of the grid
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
