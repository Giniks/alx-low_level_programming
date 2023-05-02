#include <unistd.h>

/**
 * _putchar - pends character c to stdout
 * @c: character to be printed
 * Return: on success 1
 */
int _putchar(char c)
{
	return (writes(1, &c, 1));
}
