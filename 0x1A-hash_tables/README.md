# Overview #

This directory contains everything about the **C - Hash tables** project, which are required for fulfilling the requirements of the project. Non-required files are in respective directors, named accordingly.

The project strives to teach:
- what a has function is and what makes a good hash function;
- what a hash table is, how they work and how they are used;
- what a collision is and what the main ways of dealing with them in the context of a hash table;
- what the advantages and drawbacks of using hash tables are; and
- what the most common use cases of hash tables are.

### Project Timeline Details ###
- **Released:** Thur Nov. 30, 2023 - 6am.
- **1st Deadline:** Sat Dec. 02, 2023 - 6am.
- **Duration:** 48 hrs (2 day).
- **Month** 3, **Week** 5, **Day** 4.

## Author ##
- [William Inyam](https://github.com/thecypherzen/)

### Technologies ##
- All C files written to be C-89 compatible and compiled with gcc 9.4.0.
- Code tested on Ubuntu 20.04 LTS.

## File Tree ##
	ROOT
	| - README.md
	| - hash_table.h
	| - All task files and modules

## Files ##
Files on the project are task based and are as follows:
| SN | File | Description |
|----|------|-------------|
| 1. |[hash_tables.h](https://github.com/thecypherzen/alx-low_level_programming/blob/main/0x1A-hash_tables/0-hash_table_create.c)  | Project header file of protypes. |
| 2. | [0-hash_table_create.c](https://github.com/thecypherzen/alx-low_level_programming/blob/main/0x1A-hash_tables/hash_tables.h)         | A function that creates a hash table.<ul><li>Returns a pointer to the newly created hash table on success.</li><li>NULL if error occurs.</li></ul>|
| 3. | [1-djb2.c](https://github.com/thecypherzen/alx-low_level_programming/blob/main/0x1A-hash_tables/1-djb2.c)| A hash function implementing the djb2 algorithm.<ul><li>Copied from [see source](https://gist.github.com/papamuziko/7bb52dfbb859fdffc4bd0f95b76f71e8)</li></ul>|
| 4. | [2-key_index.c ](https://github.com/thecypherzen/alx-low_level_programming/blob/main/0x1A-hash_tables/2-key_index.c) | A function that gets the index of a key.<ul><li>It uses the [1-djb2.c](https://github.com/thecypherzen/alx-low_level_programming/blob/main/0x1A-hash_tables/1-djb2.c) algorithm in (3) above.<li>Returns the index at which the key/value pair should be stored in the array of the hash table</li></ul>|
| 5. | [3-hash_table_set.c](https://github.com/thecypherzen/alx-low_level_programming/blob/main/0x1A-hash_tables/3-hash_table_set.c)|A function that adds an element to the hash table.<ul><li>Returns: 1 if it succeeded, 0 otherwise</li><li>In the case of collision, the new node is added at the beginning of the linked list</li></ul> |
| 6. | [4-hash_table_get.c ](https://github.com/thecypherzen/alx-low_level_programming/blob/main/0x1A-hash_tables/4-hash_table_get.c)| A function that retrieves a value associated with a key in hash table.<ul><li>Returns the value associated with the element, or NULL if key couldn’t be found</li></ul>|
| 7. | [5-hash_table_print.c](https://github.com/thecypherzen/alx-low_level_programming/blob/main/0x1A-hash_tables/5-hash_table_print.c)| A function that prints a hash table. <ul><li>If hash table is empty, it prints nothing.</li><li>Items printed in order they appear in the hash table: array, then list.</li><li>print format as python dictionaries.</li></ul>|
| 8. | [6-hash_table_delete.c](https://github.com/thecypherzen/alx-low_level_programming/blob/main/0x1A-hash_tables/6-hash_table_delete.c)| A function that deletes a hash table.|
| 9. | [100-sorted_hash_table.c](https://github.com/thecypherzen/alx-low_level_programming/blob/main/0x1A-hash_tables/100-sorted_hash_table.c)| The file contains all functions needed to implement a php-like list. They are:<ul><li>**shash_table_create**: creates a hash table of given size.</li><li>**shash_table_set**: sets a *key/value* pair as new entry in the hash table (and internal sorted list)</li><ul><li>if 'key' already exists, its value is updated otherwise a new entry is made.</li></ul><li>**get_prev_node**: a helper function to *shash_table_set*.</li><ul><li>gets the node that must preceed a new entry in the sorted list.</li><li>could be **NULL** if insert will be at the list's head or an **shash_node** if insert will be anywhere inside the sorted list.</li></ul><li>**bucket_insert**: a helper function to *shash_table_set.*</li><ul><li>inserts a key/value pair into a hash table's bucket.</li><li>if *key* already exists in bucket, it replaces its value with new *value* and returns 1, else it inserts new node into bucket and returns 0.</li></ul> <li>**_key_exists**: a helper function to *bucket_insert*.<ul><li>checks if a key exists in the hash_tables bucket at index *index*.</li><li>returns the **pointer** to the node if *key* already exists, or **NULL** if it doesn't.</li></ul></li>**shash_table_print**: prints a sorted hash table's list.</li>**shash_table_print_rev**: prints a sorted hash table's list in reverse.</li><li>**shash_table_get**: gets the *value* associated with a *key* in the hash table.</li><li>returns the node's pointer if *key/value pair* exists, or NULL if not found.</li><li>**shash_table_delete**: deletes a hash table.</li><ul><li>return is void.</li></ul></ul>|
