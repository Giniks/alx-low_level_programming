#include "hash_table_h"

/**
 * hash_djb2 - Hash function implementing djb2 alogrithm
 * @str: String hash
 *
 * Return: The hash calculated
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;


	hash = 5381;
	while ((c = *str++))
		hash = ((hash << 5) + hash); /*hash * 33 + c */

	return (hash);
}
