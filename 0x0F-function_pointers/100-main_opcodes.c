#include <stdio.h>
#include <stdlib.h>
/**
 * main - print opcode of its main function
 * @argc: number of argument
 * @argv: argument passed
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	int num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	void *main_start = (void *)main;
	void *main_end = main_start + num_bytes;

	while (main_start < main_end)
	{
		unsigned char opcode = *(unsigned char *)main_start;


		printf("%02x ", opcode);
		main_start++;
	}

	printf("\n");

	return (0);

}
