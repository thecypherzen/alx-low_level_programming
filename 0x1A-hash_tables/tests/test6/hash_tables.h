#ifndef _HASH_T
#define _HASH_T

/* Libraries */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Custom types */
typedef unsigned long int ul_int;

/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
	 char *key;
	 char *value;
	 struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node
 * of a linked list, because we want our HashTable to use a
 * Chaining collision handling
 */
typedef struct hash_table_s
{
	 unsigned long int size;
	 hash_node_t **array;
} hash_table_t;


/* Function Prototypes */
hash_table_t *hash_table_create(ul_int size);
ul_int hash_djb2(const unsigned char *str);
ul_int key_index(const unsigned char *key, ul_int size);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
ul_int bucket_len(hash_node_t *bucket);
int key_exists(hash_node_t *bucket, const char *key);
void hash_table_print(hash_table_t *ht);
void free_hash(hash_table_t *ht);
char *hash_table_get(const hash_table_t *ht, const char *key);
ul_int hash_length(hash_table_t *ht);
void hash_table_delete(hash_table_t *ht);
#endif /* _HASH_T*/
