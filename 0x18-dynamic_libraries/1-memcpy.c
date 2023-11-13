#include "main.h"

/**
 *  _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: the destination in memory
 * @src: the source location in memory
 * @n: number of bytes in s to fill
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	i = 0;
	while (n > 0)
	{
		*(dest + i) = *(src + i);
		i++, n--;
	}
	return (dest);
}
