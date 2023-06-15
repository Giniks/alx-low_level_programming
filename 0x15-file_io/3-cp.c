#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);
/**
 * create_buffer - Mapout 1024 bytes for a buffer
 * @fp: the name of the file buffer is storing character to
 *
 * Return: A pointer to the new allocated buffer
 */
char *create_buffer(char *file)
{
	char *file;

	buffer = malloc(sizeof(char) * 1024);
	{
		if (buffer == 0)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fp);
		exit(99);
	}
	return (buffer);
}

/**
 * close_file - closes the file
 * @fs: file descriptor to be closed
 */
void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd%d\n", fd);
		exit(100);
	}
}
/**
 * main - copies the content of a file to another file
 * @argc: Number of arguments
 * @argv: An array of pointers to the arguments
 * 
 * Return: 0 on success
 * if argument count is incorrect exit with code 97
 * if file_from does not exist or cannot be read exit with code 98
 * if file_to xannot be created or written to exit with code 99
 * if file_to or file_from cannot be closed exit with code 100
 */
int main(char argc, char *argv[])
{
	int file_from, file_to;
	ssize_t byte_read, byte_written;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	
	buffer = create_buffer(argv[2]);
	file_from = open(argv[1], O_RDONLY);
	byte_read = read(file_from, buffer, 1024);
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	byte_written = write(file_to, buffer, byte_read);

	do{
		if (file_from == -1)
		{
			dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		byte_written = write(file_to, buffer, byte_read);

		if (file_to == -1 | byte_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		byte_read = read(file_from, buffer, 1024);
		file_to = open(argv[2], O_WRONLY | O_APPEND);
	}
	while (bytes_read > 0);

	free(buffer);
	close(file_from);
	close(file_to);

	return (0);
}
