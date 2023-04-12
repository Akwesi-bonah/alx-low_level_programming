#include <stdlib.h>
#include "main.h"
/**
 * free_grid - free space
 * @grid: pointer of array
 * @height: size
 */

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		while (height >= 0)
		{
			free(grid[height]);
			height--;
		}

		free(grid);
	}
}
