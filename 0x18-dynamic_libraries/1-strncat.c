#include "main.h"

/**
 * _strncat - concatenates two strings using n bytes from src string
 * @src: pointer to source string
 * @dest: pointer to destination string
 * @n: bytes to use from src string
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j, srclen;

	i = j = srclen = 0;

	while (*(src + srclen) != '\0')
		srclen++;

	if (srclen < n)
		n = srclen;

	i = 0;

	while (*(dest + j) != '\0')
		j++;

	while (i < n)
	{
		*(dest + j) = *(src + i);
		j++;
		i++;
	}

	*(dest + (j + 1)) = '\0';

	return (dest);
}
