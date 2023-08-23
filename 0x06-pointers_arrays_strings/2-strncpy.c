#include "main.h"

/**
 * _strncpy - works just like strncpy function
 * @src: pointer to source string
 * @dest: pointer to destination string
 * @n: bytes to use from src string
 * Return: pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, len;

	i = len = 0;

	while (*(src + len) != '\0')
		len++;

	for (; i < n; i++)
		*(dest + i) = *(src + i);
	if (n > len)
	{
		for (; i < len; i++)
			*(dest + i) = '\0';
	}
	return (dest);
}
