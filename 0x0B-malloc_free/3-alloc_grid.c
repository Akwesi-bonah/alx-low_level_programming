#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - allocate space for 2d array
 * @width: width of the array matrix
 * @height: height of the array matrix
 *
 * Return: a pointer created
 * else (NULL)if height <= 0
 */

int **alloc_grid(int width, int height)
{
	int **grid, i, j;
	int len = width * height;

	if (len <= 0)
		return (NULL);

	grid = (int **)malloc(sizeof(int) * height);

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			free(grid);
			for (j = 0; j <= i; j++)
			{
				free(grid[j]);
			}
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
