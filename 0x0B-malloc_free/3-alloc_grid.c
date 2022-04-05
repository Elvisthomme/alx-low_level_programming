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

	grid = malloc(sizeof(int *) * width);

	if (grid == NULL)
		return (NULL);
	for (i = 0; i <= width; i++)
	{
		*(grid + i) = malloc(sizeof(int) * height);
		if (*(grid + i) == NULL)
			return (NULL);
		for (j = 0; j < height; j++)
			*(*(grid + i) + j) = 0;
	}
	return (grid);
}
