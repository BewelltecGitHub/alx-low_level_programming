#include "hash_tables.h"

/**
 * key_index - Get index at a key hash table.
 * @key: The key to get the index of.
 * @size: The size of the array of the hash table.
 *
 * Return: 0 on success.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
