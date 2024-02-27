#include "hash_tables.h"

/**
 * hash_table_get - fetches a value associated with a key
 * @ht: ptr to hash table
 * @key: the key to fetch
 * Return: the key's value if found, else NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	ul_int index;
	hash_node_t *temp;

	if (!ht || !key || !strlen(key))
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);

	temp = ht->array[index];
	while (temp)
	{
		if (!strcmp(temp->key, key))
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
