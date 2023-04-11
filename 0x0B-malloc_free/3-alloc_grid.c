#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - return 2d array
 * @width: width of the array
 * @height: hight of the array
 *
 * Return: 3d else NULL
 */

int **alloc_grid(int width, int height)
{
	int **grid, i, j;

	if (width < 0 || height < 0)
	{
		return (NULL);
	}

	grid = (int **)malloc(sizeof(int) * height);

	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			free(grid);
			return (NULL);
		}

	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
