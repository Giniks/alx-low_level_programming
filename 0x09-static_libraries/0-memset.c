#include "main.h"

/**
 * _memset - fill a block of memory with a specific values
 * @s: starting the address of a memeory to be filled
 * @b: derived value
 * @n: number of bytes to be changed
 *
 * Return: chane array with the new value for n bytws
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
