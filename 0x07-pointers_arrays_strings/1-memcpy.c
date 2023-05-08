#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: copy to
 * @src: copy from
 * @n: number of bytes
 *
 * Return: copied memory with n byte changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int j = n;

	for (; r < 1; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
