#include "main.h"
/**
 * get_bit - returns index value if bits
 * @n: number to be converted
 * @index: starting from 0 of the bits
 *
 * Return: value of index else -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
	{
		return (-1);
	}

	n = n >> index;
	n = n & 1;
	return (n);
}
