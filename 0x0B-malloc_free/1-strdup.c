#include "main.h"
#include <stdio.h>

/**
 * _strdup - copies a string to another location in memory
 * @str: the string
 * Return: pointer to string on success. NULL otherwise.
 */
char *_strdup(char *str)
{
	char *newstr;
	int i, sz;

	if (str == NULL)
		return (str);

	sz = (int)strlen(str) + 1;
	newstr = malloc(sz * sizeof(char));
	if (newstr != NULL)
	{
		for (i = 0; i < sz; i++)
			*(newstr + i) = *(str + i);
	}
	return (newstr);
}
