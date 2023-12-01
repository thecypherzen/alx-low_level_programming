#include "hash_table.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of the hash table
 * Return: ptr to hash table on success. NULL otherwise
 */
 hash_table_t *hash_table_create(unsigned long int size)
 {
	hash_table_t *h_table = malloc(sizeof(hash_table_t));
	if (!h_table)
		return (NULL);
	/* allocate memory for table */
	h_table->array = malloc(sizeof(hash_node_t *) * size);
	if (h_table->array)
		return (NULL);
	/* set array size */
	h_table->size = size;
	return h_table;
 }