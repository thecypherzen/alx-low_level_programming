#include "hash_tables.h"
/**
 * print_hash - prints a hash table elements
 * @ht: ptr to hash table
 * Return: void
 */
void print_hash(hash_table_t *ht)
{
	ul_int size, i;
	hash_node_t *temp;

	if (ht)
	{
		size = ht->size;
		for (i = 0; i < size; i++)
		{
			printf("----------------------------------\n");
			printf("index: %lu: nodes: %lu\n", i,
					bucket_len(ht->array[i]));
			if (ht->array[i])
			{
				temp = ht->array[i];
				while (temp)
				{
					printf("   key: %s | value: %s\n",
							temp->key, temp->value);
					temp = temp->next;
				}
			}
			else
			{
				printf("(NULL)\n");
			}
		}
	}
}
