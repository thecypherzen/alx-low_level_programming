#include "hash_tables.h"

/**
 * key_index - gets the index of a key in the hash table
 * @key: the key
 * @size: the size of the array of the hash table
 * Return: hash table index based on its size
 */
ul_int key_index(const unsigned char *key, ul_int size)
{
	ul_int hash = 5381;

	if (!key || !size)
		return (hash);

	hash = (hash_djb2(key)) % size;
	return (hash);
}
