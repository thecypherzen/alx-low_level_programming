#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @src: pointer to source string
 * @dest: pointer to destination string
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;

	if (*src == '\0')
		return (dest);

	while (*(dest + j) != '\0')
		j++;
	while (*(src + i) != '\0')
	{
		*(dest + j) =  *(src + i);
		j++;
		i++;
	}

	*(dest + (j + 1)) = '\0';

	return (dest);
}
