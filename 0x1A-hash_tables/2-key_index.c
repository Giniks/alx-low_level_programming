#include "hash_table_t"

/**
 * key_index - the function that finds the index of the key(value)
 * @key: The key to get the index
 * @size: The size of the array (hash table)
 *
 * Description: uses the hash_djb2 alogrit
 *
 * Return: The index
 * Key/value pair should be stored in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2 (key) % size);
}
