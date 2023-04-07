# include <stdio.h>
# include "main.h"
/**
 * main - print number of argument passed
 * @argc: int argument
 * @argv: string pointer
 *
 * Return: 0;
 */

int main(int argc, char __attribute__((unused)) *argv)
{
	printf("%d\n", argc - 1);

	return (0);
}
