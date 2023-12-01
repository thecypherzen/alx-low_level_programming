#include "hash_tables.h"

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int SUCCESS = 1;
	ul_int index;
	hash_node_t *temp, *new_node;

	if (!ht || !key || !(strlen(key)))
		return (!SUCCESS);

	/* get index */
	index = key_index((const unsigned char *)key, ht->size);

	/* if key exists, replace it's value */
	if (key_exists(ht->array[index], key))
	{
		temp = ht->array[index];
		while (strcmp(temp->key, key))
			temp = temp->next;
		free(temp->value);
		temp->value = strdup(value);
		return (SUCCESS);
	}

	/* else create a new node */
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (!SUCCESS);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (SUCCESS);
}

/**
 * key_exists - checks if a key already exists in hash table
 * @ht: hash table ptr
 * @key: the key being checked
 * Return: 1 if key exists, 0 otherwise.
 */
int key_exists(hash_node_t *bucket, const char *key)
{
	hash_node_t *temp;
	ul_int b_len;
	int key_exists = 1;

	b_len = bucket_len(bucket);
	if (!b_len)
		return (!key_exists);

	temp = bucket;
	while (temp)
	{
		if (!strcmp(temp->key, key))
			return (key_exists);
		temp = temp->next;
	}
	return (!key_exists);
}

/**
 * bucket_len - calculates the length of hash table bucket
 * @bucket: ptr to hash bucket's first node
 * Return: length of bucket, which can be >= 0
 */
ul_int bucket_len(hash_node_t *bucket)
{
	ul_int len = 0;
	hash_node_t *temp;

	if (!bucket)
		return (len);

	temp = bucket;
	while (temp)
	{
		len++;
		temp = temp->next;
	}
	return (len);
}
