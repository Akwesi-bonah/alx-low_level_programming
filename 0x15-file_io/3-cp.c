#include "main.h"

/**
 * main - copies the content of a file to another.
 * @argc: number of arguments.
 * @argv: the name of the files.
 * Return: 0 on success and -1 on failure
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

	if (file_to == -1)
	{
		print_error(3, 0, argv[2]);
	}

	do {
		reader = read(file_from, buffer, 1024);

		if (reader == -1)
			error(2, 0, argv[1]);

		m = write(file_to, buffer, reader);

		if (m == -1)
			print_error(3, 0, argv[2]);
	} while (n == 1024);

	closed_file = close(from_from);

	if (closed_file == -1)
		print_error(3, from_file, argv[1]);

	closed_file = close(file_to);

	if (close_file == -1)
		print_error(3, file_from, argv[2]);

	return (0);
}




void print_error(int e, int d char *str)
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
