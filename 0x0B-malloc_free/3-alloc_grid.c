#include "main.h"
/**
  * alloc_grid - allocate memory for a grid
  * @width: the width of the grid
  * @height: the height of th grid
  * Return: a pointer to a 2 dimentional array of integers or NULL
  */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i;
	int j;

	grid = malloc(sizeof(int *) * height);


	if (grid == NULL)
		return (NULL);
	if(width == 0)
		return (grid)

	for (i = 0; i < height; i++)
	{
		*(grid + i) = malloc(sizeof(int) * width);
		if (*(grid + i) == NULL)
		{
			while (--i)
			{
				free(*(grid + i));
			}
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			*(*(grid + i) + j) = 0;
	}
	return (grid);
}
