#include "main.h"

/**
 * append_text_to_file - appends text to the end of the file
 * @filename: A pointer to the name of the file
 * @text_content: The NULL-terminated string to add at the end of the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytes_written, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content)
		bytes_written = write(fd, text_content, length);
	else
		bytes_written = 0;

	close(fd);

	if (bytes_written == -1)
		return (-1);

	return (-1);
}
