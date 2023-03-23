#include <stdio.h>
/**
 * main - main block
 * Description: prints sum of even  number < 4,000,000
 * followed by a new line
 * Return: 0 Always
 */
int main(void)
{
	int x = 0, y = 1, count = 0;
	int sum = 0;

	while (count < 4000000)
	{
		count = x + y;
		x = y;
		y = count;
		if (count % 2 == 0)
			sum += count;
	}
	printf("%d\n", sum);
	return (0);
}
