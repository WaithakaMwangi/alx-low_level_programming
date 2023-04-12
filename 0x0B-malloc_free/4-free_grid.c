#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - function that frees a two dimensional array
 * @grid: parameter for grid
 * @height: the height of grid
 *
 * Description: frees memory of grid
 * Return: always 0
 *
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
