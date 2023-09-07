#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 *                - NULL strings are treated as empty strings.
 * @s1: first string
 * @s2: string to copy from
 * @n: bytes of s2 to cat with s1
 * Return: ptr to new string on success NULL otherwise.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	/* declare variables and calculate size of new string */
	unsigned int sz, lenstr2, i;
	char *newstr, *str1, *str2;

	str1 = !s1 ? "" : s1, str2 = !s2 ? "" : s2;
	lenstr2 = (unsigned int)strlen(str2), i = 0;
	sz = (unsigned int)strlen(str1) + ((n >= lenstr2) ? lenstr2 : n)  + 1;

	/* allocate memory for newstring and return */
	newstr = malloc(sizeof(char) * sz);
	if (!newstr)
		return (NULL);
	while (*str1)
		newstr[i++] = *(str1++);
	while (i < sz - 1)
		newstr[i++] = *(str2++);
	newstr[i] = '\0';
	return (newstr);
}
