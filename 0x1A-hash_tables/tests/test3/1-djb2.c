#include "hash_tables.h"
/**
 * hash_djb2 - a hash function based on djb2 algorithm
 * @str: the sring to hash
 * Return: Hash digest. Never fails
 */
ul_int hash_djb2(const unsigned char *str)
{
	ul_int hash;
	int c;

	hash = 5381;
	if (!str)
		return (hash);
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
