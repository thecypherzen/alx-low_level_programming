#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/**
 * _strlen - returns the length of a string
 * @s: pointer to string.
 * Return: length of string
 *
 *int _strlen(const char *s)
 *{
 *	int len;
 *
 *	len = 0;
 *	while (*s != '\0')
 *		len++, s++;
 *	return (len);
 *}
 */

typedef unsigned int u_int;
int _putchar(char);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif /* MORE_PTRS_H */
