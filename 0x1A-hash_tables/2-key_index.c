#include "hash_tables.h"

/**
 * key_index - Calculates the index for a key in a hash table
 * @key: The key for which to calculate the index.
 * @size: The size of the array representing the hash table.
 * Return: The index at which the key/value pair stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size)
}
