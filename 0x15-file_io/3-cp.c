#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - copies the content of a file to another
 * @argc: number of arguments
 * @argv: the name of the files.
 * Return: 0 on success else -1
*/

int main(int argc, char *argv[])
{
	char *buffer[1024];
	int  from_file, to_file, closed_file, reader, writer;

	if (argc != 3)
	{
		print_error(1, 0, "");
	}

	from_file = open(argv[1], O_RDONLY);
	if (from_file == -1)
	{
		print_error(2, 0, argv[1]);
	}

	to_file = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);

	if (to_file == -1)
	{
		print_error(3, 0, argv[2]);
	}
	do {
		reader = read(from_file, buffer, 1024);

		if (reader == -1)
			print_error(2, 0, argv[1]);

		writer = write(to_file, buffer, reader);

		if (writer == -1)
			print_error(3, 0, argv[2]);
	} while (reader == 1024);

	closed_file = close(from_file);
	if (closed_file == -1)
		print_error(3, from_file, argv[1]);

	closed_file = close(to_file);
	if (closed_file == -1)
		print_error(3, from_file, argv[2]);
	return (0);
}

/**
 * print_error - Prints message error if happens.
 * @e: Selects the error.
 * @d: FD_VALUE.
 * @str:String to print.
*/

void print_error(int e, int d, char *str)
{
	if (e == 1)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	else if (e == 2)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", str);
		exit(98);
	}
	else if (e == 3)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", str);
		exit(99);
	}
	else if (e == 4)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", d);
		exit(100);
	}
}
