#include "main.h"
#include <stdint.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to previous memory location
 * @old_size: old size of memory
 * @new_size: new size of memory location
 * Return: ptr to new string on success
 *         NULL if min > max or malloc fail
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newptr;

	if (new_size == old_size)
		return (ptr);
	if (!ptr)
	{
		ptr = malloc(new_size);
		return (!ptr ? NULL : ptr);
	}
	if (!new_size && ptr)
	{
		free(ptr);
		return (NULL);
	}
	newptr = malloc(new_size);
	if (!newptr)
		return (NULL);
	if (new_size > old_size)
		return (_cpy_mem(newptr, ptr, old_size));
	else
		return (_cpy_mem(newptr, ptr, new_size));
}

void *_cpy_mem(void *dest, void *src, unsigned int sz)
{
	uint8_t *src_u, *dest_u;
	unsigned int i;

	src_u = (uint8_t *)src;
	dest_u = (uint8_t *)dest;

	for (i = 0; i < sz; i++)
		dest_u[i] = src_u[i];
	return (dest);
}
