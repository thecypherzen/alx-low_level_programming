#include "main.h"

/**
 *  _strchr - Returns a pointer to the first occurrence of the character c in
 * the string s, or NULL if the character is not found
 * @dest: the destination in memory
 * @src: the source location in memory
 * @n: number of bytes in s to fill
 * Return: pointer to dest
 */
char *_strchr(char *s, char c)
{
	char *str;

	str = s;
	while (*str != c)
	{
		if (*str == '\0')
			return (NULL);
		else
			str++;
	}
	return (str);
}
