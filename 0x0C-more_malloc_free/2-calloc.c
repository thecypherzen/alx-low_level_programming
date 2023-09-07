#include "main.h"

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
/*	unsigned int i; */

	ptr = malloc(nmemb * size);

	if (!ptr || nmemb == 0 || size == 0)
		return (NULL);

/*	for (i = 0; i < nmemb; i++) */
/* *((u_int8_t *)ptr + size) = 0; */

	return (ptr);
}
