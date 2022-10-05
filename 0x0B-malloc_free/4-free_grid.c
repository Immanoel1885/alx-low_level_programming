#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees a 2d grid previously created
 * @grid: grid to be freed
 * @height: height of grid
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
