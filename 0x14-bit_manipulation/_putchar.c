#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes a character to a standard output
 * @c: character to be written
 *
 * Return: on success, number of character written, otherwise -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
