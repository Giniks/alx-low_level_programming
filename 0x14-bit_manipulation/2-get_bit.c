#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index
 * @n: the number to retrieve the bit from
 * @index: The index of the bit to retrieve
 *
 * Return: the value of the bit of the given index
 * otherwise -1 when an error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	return ((n >> index) & 1);
}
