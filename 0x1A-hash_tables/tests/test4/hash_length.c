#include "hash_tables.h"

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