#include "hash_tables.h"

/**
 * key_index - Gives index of a key.
 *
 * @key: The key to give index of.
 * @size: Size of array of hash table.
 *
 * Return: Index at which key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
