#include "holberton.h"
/**
 * free_grid - frees the 2 dimensional grid previously created
 * @grid: the grid
 * @height: height of the grid
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int index;

	if (grid == NULL || height <= 0)
		return;
	for (index = 0; index < height; index++)
		free(grid[index]);
	free(grid);
}
