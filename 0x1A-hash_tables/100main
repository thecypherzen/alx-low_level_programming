#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    shash_table_t *ht;

    ht = shash_table_create(25);
	if (!ht)
	{
		printf("table creation failed\n");
		return (1);
	}
	shash_table_set(ht, "", "buckle");
	shash_table_print(ht);
	printf("--------------------\n");

	shash_table_set(ht, "rose", "bed of");
	shash_table_print(ht);
	printf("--------------------\n");


	shash_table_print_rev(ht);
	printf("--------------------\n\n");

	printf("key:%s, value:%s\n", "av",
				shash_table_get(ht, "av"));
	printf("key:%s, value:%s\n", "q",
				shash_table_get(ht, "q"));
	printf("key:%s, value:%s\n", "surf",
				shash_table_get(ht, "surf"));

	shash_table_delete(ht);
	return (0);
}