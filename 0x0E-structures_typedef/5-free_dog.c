#include "dog.h"

/**
 * free_dog - frees instance of a dog ptr
 * @d: ptr to dog instance
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d)
		free(d->name), free(d->owner), free(d);
}
