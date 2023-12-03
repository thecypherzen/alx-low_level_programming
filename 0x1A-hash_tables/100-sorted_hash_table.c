#include "hash_tables.h"

/**
 * shash_table_create - creates an ordered hash table
 * @size: size of the table's array
 * Return: ptr to hash table n success, else NULL
 */
shash_table_t *shash_table_create(ul_int size)
{
	shash_table_t *table;
	ul_int i;

	if (!size)
		return (NULL);
	table = malloc(sizeof(shash_table_t));
	if (!table)
		return (NULL);
	table->shead = NULL, table->stail = NULL;
	table->size = size;
	table->array = malloc(sizeof(shash_node_t *) * size);
	if (!table->array)
	{
		free(table);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		table->array[i] = NULL;
	return (table);
}

/**
 * shash_table_set - inserts key/value pair into hash table
 * and its sorted list at the right place
 * sorted list is in ascending order
 * @ht: hash table ptr
 * @key: item's key
 * @value: item's value
 * Return: 1 on success, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	int success = 1;
	ul_int h_index;
	shash_node_t *new_node, *prev_node;

	if (!ht || !key || !strlen(key))
		return (!success);
	new_node = malloc(sizeof(shash_node_t));
	if (!new_node)
		return (!success);
	h_index = key_index((const unsigned char *)key, ht->size);
	if (bucket_insert(ht, h_index, new_node, key, value) == 1)
	{
		free(new_node);
		return (success);
	}
	if (!ht->shead)		/* if sorted list is empty */
	{
		ht->shead = new_node, ht->stail = new_node;
		new_node->sprev = new_node->snext = NULL;
		return (success);
	}
	prev_node = get_prev_node(ht->shead, key);
	if (!prev_node)	/* inserting before first slist node */
	{
		new_node->snext = ht->shead, new_node->sprev = NULL;
		ht->shead->sprev = new_node, ht->shead = new_node;
	}
	else
	{
		if (prev_node->snext)	/* inserting in middle of slist */
			new_node->snext = prev_node->snext, new_node->snext->sprev = new_node;
		else	/* inserting at end of slist */
			new_node->snext = NULL, ht->stail = new_node;
		prev_node->snext = new_node, new_node->sprev = prev_node;
	}
	return (success);
}

/**
 * get_prev_node - gets the node of the internal sorted linked list
 * after which the new node is to be inserted.
 * @shead: ptr to sorted list head
 * @key: the key of the new node
 * Return: NULL if insert is before list's head
 *		Ptr to preceeding node to new node otherwise
 */
shash_node_t *get_prev_node(shash_node_t *shead, const char *key)
{
	shash_node_t *temp = shead, *prev = NULL;
	int ret;

	while (temp)
	{
		/* if 'key' is less than node's key, break & return */
		ret = strcmp(key, temp->key);
		if (ret <= -1)
			break;
		prev = temp, temp = temp->snext;
	}
	return (prev);
}

/**
 * bucket_insert - inserts a node into a bucket of the hash table
 * @ht: the hash table
 * @index: bucket's index in hash table
 * @new_node: ptr to the new node to insert
 * @key: key of new entry
 * @value: value of new entry
 * Return: 1 if key already exists, 0 otherwise.
 */
int bucket_insert(shash_table_t *ht, ul_int index,
					shash_node_t *new_node, const char *key,
					const char *value)
{
	shash_node_t *temp, *exists;
	int key_exists = 1;

	exists = _key_exists(ht, index, key);
	if (exists)
	{
		free(exists->value);
		exists->value = strdup(value);
		return (key_exists);
	}

	new_node->key = strdup(key);
	new_node->value = strdup(value);

	temp = ht->array[index];
	new_node->next = temp;
	ht->array[index] = new_node;
	return (!key_exists);
}

/**
 * shash_table_print -  prints the hash_table's sorted list
 * @ht: ptr to hash table
 * Retun: void
 */
void shash_table_print(shash_table_t *ht)
{
	shash_node_t *temp;

	if (!ht)
		return;
	temp = ht->shead;
	printf("{");
	while (temp)
	{
		printf("'%s': '%s'", temp->key, temp->value);
		temp = temp->snext;
		if (temp)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev -  prints the hash_table's sorted list
 * in reverse order.
 * @ht: ptr to hash table
 * Retun: void
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *temp;

	if (!ht)
		return;
	temp = ht->stail;
	printf("{");
	while (temp)
	{
		printf("'%s':'%s'", temp->key, temp->value);
		temp = temp->sprev;
		if (temp)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_get - gets the value associated with a key in
 * a hash table
 * @ht: ptr to the hash table
 * @key: the key to obtains its value
 * Return: ptr to key's value if found, else NULL
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	ul_int index;
	shash_node_t *temp;

	if (!ht || !key || !strlen(key))
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);

	temp = ht->array[index];
	while (temp)
	{
		if (!strcmp(temp->key, key))
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}

/**
 * shash_table_delete - deletes a hash table of sorted entries by keys
 * @ht: pointer to hash table
 * Return: void.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *temp, *to_free;

	if (!ht)
		return;
	temp = ht->shead;
	while (temp)
	{
		to_free = temp;
		temp = temp->snext;
		free(to_free->key), free(to_free->value);
		free(to_free);
	}
	free(ht->array);
	free(ht);
	ht = NULL;
}

/**
 * _key_exists - checks if a key already exists in the hash table
 * @ht: ptr to hash table
 * @index: bucket index in hash table
 * @key: they key to search for
 * Return: pointer to the key's node if it exists, NULL otherwise.
 */
shash_node_t *_key_exists(shash_table_t *ht, ul_int index, const char *key)
{
	shash_node_t *temp;

	if (!ht)
		return (NULL);
	temp = ht->array[index];
	if (!temp)
		return (NULL);
	while (temp)
	{
		if (!strcmp(temp->key, key))
			return (temp);
		temp = temp->next;
	}
	return (NULL);
}
