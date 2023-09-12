#include "dog.h"

/**
 * init_dog - initializes the instance of a struct of type dog.
 * @d: ptr to struct
 * @name: dog name
 * @age: dog age
 * @owner: dog owner name
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->owner = owner;
		d->age = age;
	}
}
