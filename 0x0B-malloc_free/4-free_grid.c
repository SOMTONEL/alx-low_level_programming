#include "main.h"
#include <stdlib.h>

/**
 * free_grid - deallocates memory space
 * @grid: pointer to 2D array
 * @height: height of 2D array
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
