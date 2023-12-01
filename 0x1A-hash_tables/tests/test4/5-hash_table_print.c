#include "hash_tables.h"
/**
 * print_hash - prints a hash table elements
 * @ht: ptr to hash table
 * Return: void
 */
void hash_table_print(hash_table_t *ht)
{
	ul_int size, i, hash_len, n = 0;
	hash_node_t *temp;

	printf("{");
	if (!ht)
	{
		printf("}\n");
		return;
	}
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
			while(temp)
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
