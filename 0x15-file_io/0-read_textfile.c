#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - a function that reads a text file and prints standard output
 * @filename: file to print it content
 * @letters: characters to be printed
 *
 * Return: 0 if filename is NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t reader, writer;
	int count;
	char *words;

	if (filename == NULL)
	{
		return (0);
	}

	count = open(filename, O_RDONLY);
	if (count == -1)
	{
		return (0);
	}

	words = malloc(letters);
	if (words == NULL)
	{
		close(words);
		return (0);
	}

	reader  = read(count, words, letters);
	writer = write(STDOUT_FILENO, words, reader);

	if (writer != reader)
	{
		close(count);
		free(words);

		return (0);
	}
	close(count);
	free(words);

	return (writer);
}
