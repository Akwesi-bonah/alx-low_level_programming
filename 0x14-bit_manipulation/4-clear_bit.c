/**
 * _bit - sets the value of a bit to 1 at a given index
 * @n: Number
 * @index: index, starting from 0
 * Return: value of the bit at index else -1
 */
int _bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a = 1;

	if (index > 64)
		return (-1);
	*n = a << index | *n;
	return (1);
}

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: number
 * @index: index starting form 0
 * Return: value of the bit at index else -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
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
