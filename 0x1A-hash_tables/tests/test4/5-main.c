#include "hash_tables.h"

int main(void)
{
	/*
	hash_table_t *table = NULL;
	ul_int size = 1024;
	char *key, *value;

	table = hash_table_create(size);
	if (!table)
	{
		printf("table creation failed\n");
		return (0);
	}

	key = "hetairas", value = "house";
	hash_table_set(table, (const char *)key, (const char *)value);

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

	key = "dram", value = "hopefully";
	hash_table_set(table, (const char *)key, (const char *)value);

	key = "vivency", value = "consistency";
	hash_table_set(table, (const char *)key, (const char *)value);

	value = hash_table_get(table, "vivency");
	printf("key: %s | value: %s\n", "vivency",
				value ? value : "DOESN'T EXIST");

	value = hash_table_get(table, "redescribed");
	printf("key: %s | value: %s\n", "redescribed",
				value ? value : "DOESN'T EXIST");

	value = hash_table_get(table, "hallowed");
	printf("key: %s | value: %s\n", "redescribed",
				value ? value : "DOESN'T EXIST");

	free_hash(table);
	*/

	hash_table_t *ht;
	char *value;

	ht = hash_table_create(1024);
	hash_table_print(ht);
	hash_table_set(ht, "c", "fun");
	hash_table_set(ht, "python", "awesome");
	hash_table_set(ht, "Bob", "and Kris love asm");
	hash_table_set(ht, "N", "queens");
	hash_table_set(ht, "Asterix", "Obelix");
	hash_table_set(ht, "Betty", "Cool");
	hash_table_set(ht, "98", "Battery Street");
	hash_table_set(ht, "c", "isfun");
	hash_table_set(ht, "greg", "grafitti");
	printf("====[total items: %lu]====\n", hash_length(ht));

	value = hash_table_get(ht, "python");
	printf("%s:%s\n", "python", value);
	value = hash_table_get(ht, "Bob");
	printf("%s:%s\n", "Bob", value);
	value = hash_table_get(ht, "N");
	printf("%s:%s\n", "N", value);
	value = hash_table_get(ht, "Asterix");
	printf("%s:%s\n", "Asterix", value);
	value = hash_table_get(ht, "Betty");
	printf("%s:%s\n", "Betty", value);
	value = hash_table_get(ht, "98");
	printf("%s:%s\n", "98", value);
	value = hash_table_get(ht, "c");
	printf("%s:%s\n", "c", value);
	value = hash_table_get(ht, "javascript");
	printf("%s:%s\n", "javascript", value);
	printf("==================================\n");
	hash_table_print(ht);

	/*free_hash(ht);*/
	return (EXIT_SUCCESS);
}
