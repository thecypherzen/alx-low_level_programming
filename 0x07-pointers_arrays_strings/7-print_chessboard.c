#include "main.h"

/**
 *  _strstr - finds the first occurrence of the substring needle in the string
 * haystack
 * @haystack: string to be checked
 * @needle: string to check
 * Return: a pointer to the beginning of the located substring
 *         or NULL if substring not found
 */
void print_chessboard(char (*a)[8])
{
	int i;

	for (i = 0; i < (int)(sizeof(*a)); i++)
	{
		while(*a)
		{
			printf("%c", *(*a + i));
			*a++;
		}
		printf("\n");
	}
}
