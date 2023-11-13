#include "main.h"

/**
 *  _memset - fills memory with a constant byte
 * fills the first n bytes of the memory area pointed to by s with the constant
 * byte b.
 * @s: the source string
 * @b: the character to fill
 * @n: number of bytes in s to fill
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	while (n > 0)
	{
		*(s + i) = b;
		i++, n--;
	}
	return (s);
}
