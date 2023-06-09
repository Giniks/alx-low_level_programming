#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given time
 * @n: a pointer to the number to modify
 * @index: Index of the bit to clear
 * Return: 1 if successful and -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))

		return (-1);
	*n &= ~(1UL << index);

	return (1);
}
