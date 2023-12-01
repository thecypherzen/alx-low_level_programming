#include "hash_tables.h"

int main(void)
{
	hash_table_t *table = NULL;
	ul_int size = 3;
	char *key, *value;

	table = hash_table_create(size);
	if (table)
	{
		printf("hash table created successfully\n");

		key = "home", value = "house";
		hash_table_set(table, (const char *)key, (const char *)value);
		print_hash(table);
		key = "home", value = "them";
		hash_table_set(table, (const char *)key, (const char *)value);

		/*key = "me", value = "us";
		hash_table_set(table, (const char *)key, (const char *)value);

		key = "gray", value = "deeer";
		hash_table_set(table, (const char *)key, (const char *)value);

		key = "plumber", value = "peter";
		hash_table_set(table, (const char *)key, (const char *)value);

		key = "Driver", value = "Jackson";
		hash_table_set(table, (const char *)key, (const char *)value);

		key = "Main chef", value = "Douglas";
		hash_table_set(table, (const char *)key, (const char *)value);

		key = "Assistant Chef", value = "Madammeis";
		hash_table_set(table, (const char *)key, (const char *)value);

		key = "Personal_Assistant", value = "Bori Minyo";
		hash_table_set(table, (const char *)key, (const char *)value);

		key = "House_Keeper", value = "Polaris Arnold";
		hash_table_set(table, (const char *)key, (const char *)value);


		key = "Security Guard", value = "Alexis Ikponko";
		hash_table_set(table, (const char *)key, (const char *)value);

		key = "this", value = "there";
		hash_table_set(table, (const char *)key, (const char *)value); */

		print_hash(table);
	}
	else
	{
		printf("table creation failed\n");
	}
	free_hash(table);
	return (0);
}