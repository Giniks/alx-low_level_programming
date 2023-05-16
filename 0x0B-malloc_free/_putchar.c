#include "main.h"
#include <unistd.h>
/**
 * _putchar - write the character of c to stdout
 * @c: the character to be printed
 *
 * Return: on success 1
 * on error, -1 is returned, and it sets appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
