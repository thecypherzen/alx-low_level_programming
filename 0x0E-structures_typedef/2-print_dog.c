#include "dog.h"

/**
 * print_dog - prints members of a struct
 * @d: ptr to struct
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", (d->name && *(d->name)) ? d->name : "(nil)");
		printf("Age: %f\n", d->age >= 0 ? d->age : 0);
		printf("Owner: %s\n", (d->owner && *(d->owner)) ? d->owner : "(nil)");
	}
}
