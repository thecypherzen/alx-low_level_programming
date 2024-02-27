#include "hash_tables.h"

int main(void)
{
	ul_int size = 1024;
	hash_table_t *table = NULL;

	table = hash_table_create(size);
	if (table == NULL)
	{
		printf("Hash table is null\n");
	}
	else
	{
		printf("table ptr: %p\n", (void *)table);
		if (table->array)
		{
			printf("table address: %p\n", (void *)table->array);
		}
		else
			printf("table array is NULL\n");
		printf("table size: %lu\n", table->size);
	}
	return (EXIT_SUCCESS);
}