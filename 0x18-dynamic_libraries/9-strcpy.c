#include "main.h"

/**
 * _strcpy -copies the string pointed to by src, including the terminating null
 *  byte (\0), to the buffer pointed to by dest
 * @dest: destination pointer
 * @src: source pointer
 * Return: *dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = _strlen(src);

	for (i = 0; i <= len; i++)
		*(dest + i) = *(src + i);
	return (dest);
}
