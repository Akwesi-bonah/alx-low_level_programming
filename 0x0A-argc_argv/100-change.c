# include "main.h"
# include <stdio.h>
/**
 * _atoi - convert string to integers
 * @s: string to be converted
 *
 * Return: int converted form string
 */

int _atoi(char *s)
{
	int sign = 1, i = 0;
	unsigned int res = 0;

	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{
		res = (res * 10) + (s[i] - '0');
		i++;
	}
	res *= sign;
	return (res);
}

/**
 * main - print change
 * @argc: number of arguments
 * @argv: argument passed
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num, i;
	int change = 0;
	int coins[] = {25, 10, 5, 2, 1};


	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = _atoi(argv[1]);

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && num >= 0; i++)
	{
		while (num >= coins[i])
		{
			change++;
			num -= coins[i];
		}
	}

	printf("%d\n", change);

	return (0);
}
