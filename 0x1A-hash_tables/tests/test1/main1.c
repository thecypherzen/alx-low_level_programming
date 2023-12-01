#include "hash_tables.h"

int main(void)
{
	char *str;

	str = "what a world";
	printf("%lu\n", hash_djb2((const unsigned char *)str));

	str = NULL;
	printf("%lu\n", hash_djb2((const unsigned char *)str));

	str = "123433480";
	printf("%lu\n", hash_djb2((const unsigned char *)str));

	str = "][[.,`´∑]]";
	printf("%lu\n", hash_djb2((const unsigned char *)str));
	return (0);
}