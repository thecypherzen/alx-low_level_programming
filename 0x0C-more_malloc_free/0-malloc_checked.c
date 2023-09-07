#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: the int to allocate memory for
 * Return: pointer to the allocated memory on success.
 *         else, cause normal process termination with a status value of 98.
 */
void *malloc_checked(unsigned int b)
{
	void *temp;

	temp = malloc(b);

	if (!temp)
		exit(98);
	return (temp);
}
