#include "hash_tables.h"

/**
 * hash_table_delete - frees a hash table
 * @ht: ptr to hash table
 * Return: void always
 */
void hash_table_delete(hash_table_t *ht)
{
	ul_int size, i;
	hash_node_t *temp, *to_free = NULL;

	if (!ht)
		return;
	size = ht->size;
	for (i = 0; i < size; i++)
	{
		if (!ht->array[i])
			continue;
		temp = ht->array[i];
		while (temp)
		{
			to_free = temp;
			temp = temp->next;
			free(to_free->key);
			free(to_free->value);
			free(to_free);
			to_free = NULL;
		}
	}
	free(ht->array);
	free(ht);
	ht = NULL;
}
