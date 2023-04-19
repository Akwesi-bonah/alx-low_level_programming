#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - This function takes four argument
 * The for argument to perform calculation
 * @argc: number of argument passed
 * @argv: argument passed
 *
 * Return: 0 Always
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	char *opr;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	opr = argv[2];

	if ((*opr == '/' || *opr == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	if (get_op_func(opr) == NULL || opr[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", get_op_func(opr)(num1, num2));

	return (0);
}
