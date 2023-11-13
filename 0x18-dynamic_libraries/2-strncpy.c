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
/*	if (dest == NULL || src == NULL || n == 0) */
/*	return (dest); */

	int i;

	i = 0;

	for (; i < n && *(src + i) != '\0'; i++)
		*(dest + i) = *(src + i);

	for (; i < n; i++)
		*(dest + i) = '\0';
	return (dest);
}
