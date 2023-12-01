#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table elements
 * @ht: ptr to hash table
 * Return: void
 */
void hash_table_print(hash_table_t *ht)
{
	ul_int size, i, hash_len, n = 0;
	hash_node_t *temp;

	if (!ht)
		return;
	printf("{");
	size = ht->size, hash_len = hash_length(ht);
	for (i = 0; i < size; i++)
	{
		if (ht->array[i])
		{
			temp = ht->array[i];
			printf("'%s': '%s'", temp->key, temp->value);
			if (++n != hash_len)
				printf(", ");
		}
	}
	for (i = 0; i < size; i++)
	{
		if (ht->array[i])
		{
			temp = ht->array[i]->next;
			while (temp)
			{
				printf("   key: %s | value:%s\n", temp->key, temp->value);
				if (++n != hash_len)
					printf(", ");
				temp = temp->next;
			}
		}
	}
	printf("}\n");
}

/**
 * hash_length - gets the length of a hash table
 * @ht: hash table pointer
 * Return: the number of items in hash table
 */
ul_int hash_length(hash_table_t *ht)
{
	ul_int size, i, ht_len = 0;

	if (!ht)
		return (ht_len);

	size = ht->size;
	for (i = 0; i < size; i++)
	{
		ht_len += bucket_len(ht->array[i]);
	}
	return (ht_len);
}
