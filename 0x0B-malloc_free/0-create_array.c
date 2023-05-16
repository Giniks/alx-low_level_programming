#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of characters and initialize
 * it with a specific char
 * @c: chatacter to be initialize
 * @size: number of bytes allocated
 *
 * Return: a pointer to the array, or null if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array = malloc(size);

	if (size == 0 || array == 0)
		return (NULL);
	while (size--)
		array[size] = c;
	return (array);
}
