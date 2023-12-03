#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	shash_table_t *ht = NULL;
	ht = shash_table_create(1024);
	if (!ht)
		printf("table creation failed\n");
	shash_table_set(ht, "hetairas", "luve");
	shash_table_set(ht, "heliotropes", "darling");
	shash_table_set(ht, "serafins", "man");
	shash_table_set(ht, "depravement", "poster");
	shash_table_set(ht, "joyful", "first");
	shash_table_set(ht, "stylist", "1st");
	shash_table_set(ht, "dram", "twenty");
	shash_table_set(ht, "redescribed", "1");
	shash_table_print(ht);
	shash_table_set(ht, "mentioner", "2");
	shash_table_set(ht, "neurospora", "3");
	shash_table_set(ht, "subgenera", "4");
	shash_table_set(ht, "synaphea", "5");
	shash_table_set(ht, "urites", "6");
	shash_table_set(ht, "vivency", "7");
	printf("--------------------------------------------\n");
	_shash_table_print(ht);
	printf("\n");
	shash_table_delete(ht);
	return (EXIT_SUCCESS);
}
