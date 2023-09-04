#include "main.h"
#include <stdio.h>

/**
 * create_array - creates an array of chars, and initializes it with a
 * specific char.
 * @size: size of array
 * @c: character to initialize
 * Return: 0 always
 */
char *create_array(unsigned int size, char c)
{
	char *temp;

	temp = (size < 1) ? NULL : malloc(size * sizeof(char));

	if (temp != NULL)
		memset(temp, c, size);

	return (temp);
}
