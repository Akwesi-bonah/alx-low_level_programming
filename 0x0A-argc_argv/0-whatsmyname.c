# include <stdio.h>
# include "main.h"
/**
 * main - print the progam name
 * @argc: int argument
 * @argv: string pointer
 *
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
