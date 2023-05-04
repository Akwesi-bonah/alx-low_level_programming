#include "main.h"
/**
 * clear_bit - set value of a bits to 0
 * @n: number to be converted
 * @index: stating from 0
 *
 * Return: index value of bit else -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a = (unsigned long int)(- 1);
	unsigned int i;

	if (index > 64)
	{
		return (-1);
	}

	for (i = 0; i < index; i++)
	{
		a = a << 1;
		set_bit(&a, 0);
	}

	*n = a & *n;
	return (1);
}
