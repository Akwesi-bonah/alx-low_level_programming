#include "main.h"
/**
 * create_file - function that appends text at the end of a file.
 * @filename: File to be created
 * @text_content: is a NULL terminated string to write to the file.
 * Return: 1 on success and -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int i = 0, reader, writer;

	if (filename == NULL)
	{
		return (-1);
	}

	reader = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (reader == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		text_content = "";
	}

	for (i = 0; text_content[i] != '\0'; i++)
	{
		;

	}


	writer = write(reader, text_content, i);
	close(reader);

	if (writer  == -1)
	{
		return (-1);
	}

	return (1);
}
