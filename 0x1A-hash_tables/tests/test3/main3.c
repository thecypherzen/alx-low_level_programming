#include "hash_tables.h"

int main(void)
{
	hash_table_t *table = NULL;
	ul_int size = 1024;
	char *key, *value;
	int ret;

	table = hash_table_create(size);
	if (table)
	{
		printf("hash table created successfully\n");

		key = "hetairas", value = "house";
		ret = hash_table_set(table, (const char *)key, (const char *)value);
		printf("return: %d\n", ret);

		key = "mentioner", value = "them";
		hash_table_set(table, (const char *)key, (const char *)value);

		key = "heliotropes", value = "us";
		hash_table_set(table, (const char *)key, (const char *)value);

		key = "neurospora", value = "deeer";
		hash_table_set(table, (const char *)key, (const char *)value);

		key = "depravement", value = "peter";
		hash_table_set(table, (const char *)key, (const char *)value);

		key = "serafins", value = "Jackson";
		hash_table_set(table, (const char *)key, (const char *)value);

		key = "subgenera", value = "Douglas";
		hash_table_set(table, (const char *)key, (const char *)value);

		key = "stylist", value = "Madammeis";
		hash_table_set(table, (const char *)key, (const char *)value);

		key = "joyful", value = "Bori Minyo";
		hash_table_set(table, (const char *)key, (const char *)value);

		key = "synaphea", value = "Polaris Arnold";
		hash_table_set(table, (const char *)key, (const char *)value);

		key = "redescribed", value = "Alexis Ikponko";
		hash_table_set(table, (const char *)key, (const char *)value);

		key = "urites", value = "there";
		hash_table_set(table, (const char *)key, (const char *)value);

		key = "dram", value = "there";
		hash_table_set(table, (const char *)key, (const char *)value);

		key = "vivency", value = "there";
		hash_table_set(table, (const char *)key, (const char *)value);

		print_hash(table);
	}
	else
	{
		printf("table creation failed\n");
	}
	free_hash(table);
	return (0);
}