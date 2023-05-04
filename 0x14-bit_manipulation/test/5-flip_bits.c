#include "main.h"
/**
 * flip_bits - returns the number of bits
 * @n: number to be fliped
 * @m: number to be compared
 *
 * Return: value to be changed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i, count = 0, a = 1;
       long int = tr, ptr;

	for (i = 0; i < 64; i++)
	{
		tr = a & n;
		ptr = a & m;
		a = a << 1;
		if (tr != ptr)
			count++;
	}

	return (count);
}
