# include "main.h"
/**
 * swap_int - swap the values of two variables
 * @a: first variable
 * @b: second variable
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
