#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function frees 2D arr of ints created
 * by alloc_grid()
 *
 * @grid: input 2d arr
 * @height: height of grid
 *
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL)
		return;

	while (i < height)
		free((int *)grid[i++]);
	free(grid);
}
