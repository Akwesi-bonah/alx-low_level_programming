#include "main.h"

/**
 * clear_bit - set value of a bits to 0
 * @n: number to be converted
 * @index: stating from 0
 *
 * Return: index value of bit else -1
 */

int clear_bit(unsined long int *n, unsigned int index)
{
	unsigned long int a = ULONG_MAX - 1;
	unsigned int i;

	if (index > 64)
	{
		return (-1);
	}

	for (i = 0; i < index; i++)
	{
		a = a << 1;
		_bit(&a, 0);
	}
	
	*n = a & *n;

	return (1);
}

/**
 * set_bit - set a value of bit to 1 for a given index
 * @n: number to be converted
 * @index: starting index 0 of the bit
 *
 * Return: index value else -1
 */

int _bit(unsigned long int *n, unsigned int index)
{
        unsigned long int val = 1;

        if (index > 64)
        {
                return (-1);
        }

        *n = val << index | *n;

        return (1);
}
