#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
*free_grid - Function free_grid
*@grid: Two dimension grid
*@height: grd dimension height
*Return: void
*
*/

void free_grid(int **grid, int height)
{
	int erick;

	for (erick = 0; erick < height; erick++)
	{
		free(grid[erick]);
	}
	free(grid);
}
