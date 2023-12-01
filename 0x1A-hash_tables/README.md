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
| 2. | [0-hash_table_create.c](https://github.com/thecypherzen/alx-low_level_programming/blob/main/0x1A-hash_tables/hash_tables.h) |A function that creates a hash table.<ul><li>Returns a pointer to the newly created hash table on success.</li><li>NULL if error occurs.</li></ul>|
| 3. | [1-djb2.c](https://github.com/thecypherzen/alx-low_level_programming/blob/main/0x1A-hash_tables/1-djb2.c)| A hash function implementing the djb2 algorithm.<ul><li>Copied from [see source](https://gist.github.com/papamuziko/7bb52dfbb859fdffc4bd0f95b76f71e8)</li></ul>|
