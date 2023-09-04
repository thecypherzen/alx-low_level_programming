#include "main.h"
#include <stdio.h>

/**
 * str_concat - concatenates two strings in a new memory location.
 * @s1: first string
 * @s2: second string
 * Return: pointer to new string on success. NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *newstr;
	int i, j, k, l1, l2, sz;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	l1 = (int)strlen(s1), l2 = (int)strlen(s2);
	sz = l1 + l2 + 1;
	j = k = 0;

	newstr = malloc(sz * sizeof(char));
	if (newstr != NULL)
	{
		for (i = 0; i < sz - 1; i++)
		{
			if (j < l1)
				newstr[i] = s1[j], j++;
			if (k < l2)
				newstr[i + l1] = s2[k], k++;
		}
		newstr[i] = '\0';
	}
	return (newstr);
}
