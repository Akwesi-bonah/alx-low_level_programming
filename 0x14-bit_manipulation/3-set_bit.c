#include "main.h"
/**
 * set_bit - set a value of bit to 1 for a given index
 * @n: number to be converted
 * @index: starting index 0 of the bit
 *
 * Return: index value else -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int val = 1;

	if (index > 64)
	{
		return (-1);
	}

	*n = val << index | *n;

	return (1);
}
