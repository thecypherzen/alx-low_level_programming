#include "main.h"
#include <stdint.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * -  allocates memory for an array of nmemb elements of size bytes each and
 * sets memory to 0;
 * @nmemb: number of elements
 * @size: size of each member
 * Return: ptr to new string on success
 *         NULL if nmemb or size is 0 or malloc fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;
	uint8_t *temp;

	if (!nmemb || !size)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (!ptr)
		return (NULL);

	temp = (uint8_t *)ptr;
	for (i = 0; i < nmemb * size; i++)
		*(temp + i) = 0;

	return (ptr);
}
