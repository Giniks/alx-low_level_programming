#include "main.h"

/**
 * get_endianness - checks the endianess of the system
 * Return: 0 if it's big, 1 if little
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *byte = (char *)&num;

	return (*byte);
}
