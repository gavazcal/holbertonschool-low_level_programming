#include "hash_tables.h"

/**
 * key_index - returns the index of a key
 * @key: the key
 * @size: size of the array of the hash table
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx;

	if (size < 1)
		return (0);

	idx = hash_djb2(key);

	return (idx % size);

}
