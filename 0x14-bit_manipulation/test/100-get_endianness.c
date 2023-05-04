#include "main.h"
/**
 * get_endianness - check the endiannes
 * Return: 0 if bit else 1
 */


int get_endianness(void)
{
	int a = 1;

	a = a >> 1;
	if (a != 0)
		return (0);
	return (1);
}
