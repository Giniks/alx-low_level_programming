#include "main.h"

/**
 * create_file - creates a file with the given filename.
 * And writes the text content to it
 * @filename: The name of the file to create
 * @text_content: The NULL_terminated string to written
 *
 * Return: 1 on success, -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int fd, bytes_written, length = 0;

	if (filename == NULL)
		return (-1);

	while (text_content && text_content[length])
		length++;
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
	{
		close(fd);
		return (-1);
	}

	bytes_written = write(fd, text_content, length);

	if (bytes_written == -1 || bytes_written != length)
	{
		close(fd);
		return (-1);
	}
	
	close(fd);
	return (1);
}
