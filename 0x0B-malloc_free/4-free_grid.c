#include "main.h"
/**
  * free_grid - free memory for a grid
  * @grid: the grid
  * @height: the height of th grid
  */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(*grid + i);
	}
	free(grid);
}
