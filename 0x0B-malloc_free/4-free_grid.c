#include "main.h"
#include <stdlib.h>

/**
  * free_grid - use free function on previous grid
  * @grid: 2 dimension array to free
  * @height: input heigth
  *
  * Return: free 'd grid
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
