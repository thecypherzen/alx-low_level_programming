#include "hash_tables.h"

int main(void)
{
	ul_int size = 1024, index;
	char *str;

	str = "me and you";
	index = key_index((const unsigned char *)str, size);
	printf("key: '%s' | index: %lu\n", str, index);

	str = "a";
	index = key_index((const unsigned char *)str, size);
	printf("key: '%s' | index: %lu\n", str, index);

	str = "1";
	index = key_index((const unsigned char *)str, size);
	printf("key: '%s' | index: %lu\n", str, index);

	str = "CREATE";
	index = key_index((const unsigned char *)str, size);
	printf("key: '%s' | index: %lu\n", str, index);

	str = "greaT is tThe wAy of Justice and f/air is the path of those Who\
	thread thereon";
	index = key_index((const unsigned char *)str, size);
	printf("key: '%s' | index: %lu\n", str, index);

	str = NULL;
	index = key_index((const unsigned char *)str, size);
	printf("key: '%s' | index: %lu\n", str, index);

	str = "1234857768904";
	index = key_index((const unsigned char *)str, 0);
	printf("key: '%s' | index: %lu\n", str, index);

	size = 5;
	str = "26";
	index = key_index((const unsigned char *)str, size);
	printf("key: '%s' | index: %lu\n", str, index);
	return (0);
}