#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of the hash table
 * Return: ptr to hash table on success. NULL otherwise
 */
hash_table_t *hash_table_create(ul_int size)
{
	hash_table_t *h_table = NULL;
	ul_int i;

	if (!size)
		return (h_table);

	h_table = malloc(sizeof(hash_table_t));
	if (!h_table)
		return (NULL);

	/* allocate memory for table */
	h_table->array = malloc(sizeof(hash_node_t *) * size);
	if (!h_table->array)
	{
		free(h_table);
		return (NULL);
	}

	/* init array buckets to NULL */
	for (i = 0; i < size; i++)
		h_table->array[i] = NULL;

	/* set array size */
	h_table->size = size;

	return (h_table);
}
