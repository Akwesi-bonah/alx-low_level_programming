#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: File to be created
 * @text_content: content to be appended
 * Return: 1 on success else -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int i = 0, reader, writer;

	if (filename == NULL)
		return (-1);

	reader = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	for  (i = 0; text_content[i] != '\0'; i++)
	{
		;
	}
	
       writer	= write(fd, text_content, i);
       close(fd);
       
       if (m == -1)
		return (-1);

	return (1);
}
