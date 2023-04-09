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
 * main - multiple two numbers
 * @argc: number of argumnets
 * @argv: argument passed
 *
 * Return: 0
 */


int main(int argc, char *argv[])
{


	if (argc < 3 || argc > 3)
	{
		printf("Error\n");

		return (1);
	}

	printf("%d\n", _atoi(argv[1]) * _atoi(argv[2]));

	return (0);
}
