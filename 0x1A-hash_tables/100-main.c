#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	shash_table_t *ht = NULL;

	/*ht = shash_table_create(24);*/
	shash_table_set(ht, "above", "dove");
	shash_table_set(ht, "active", "viva");
	shash_table_set(ht, "bold", "man");
	shash_table_set(ht, "bar", "poster");
	shash_table_set(ht, "10", "first");
	shash_table_set(ht, "01", "1st");
	shash_table_set(ht, "20", "twenty");
	printf("attempting to print hash table\n");
	shash_table_print(ht);
	shash_table_print_rev(ht);
	/*printf("'%s':'%s'\n", "y", shash_table_get(ht, "y"));*/
	/*shash_table_set(ht, "j", "1");
	shash_table_print(ht);
	shash_table_set(ht, "c", "2");
	shash_table_print(ht);
	shash_table_set(ht, "b", "3");
	shash_table_print(ht);
	shash_table_set(ht, "z", "4");
	shash_table_print(ht);
	shash_table_set(ht, "n", "5");
	shash_table_print(ht);
	shash_table_set(ht, "a", "6");
	shash_table_print(ht);
	shash_table_set(ht, "m", "7");
	shash_table_print(ht);
	shash_table_print_rev(ht);*/
	shash_table_delete(ht);
	return (EXIT_SUCCESS);
}
