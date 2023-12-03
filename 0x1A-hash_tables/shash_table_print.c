#include "hash_tables.h"
/**
 * shash_table_print - prints a hash table elements
 * @ht: ptr to hash table
 * Return: void
 */
void _shash_table_print(shash_table_t *ht)
{
	ul_int size, i, n;
	shash_node_t *temp;

	if (!ht)
		return;
	size = ht->size;
	for (i = 0; i < size; i++)
	{
		if (ht->array[i])
		{
			temp = ht->array[i], n = 0;
			while (temp)
			{
				printf("'%s': '%s'\n", temp->key, temp->value);
				temp = temp->next, ++n;
			}
			printf("--------------[nodes: %lu]--------------\n", n);
		}
	}
}
