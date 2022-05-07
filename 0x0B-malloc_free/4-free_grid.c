#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2D integer grid
 *
 * @grid: The grid to be freed.
 * @height: Height of grid
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
