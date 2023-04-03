# include "main.h"
/**
 * print_chessboard - prints chessboard
 * @a: array to print
 */

void print_chesssboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putcahr(a[i][j]);
		}

		_putchar('\n');
	}
}
