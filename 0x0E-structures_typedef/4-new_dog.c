#include "dog.h"

/**
 * new_dog - creates a new instance of a dog
 * @name: dog name ptr
 * @age: dog age
 * @owner: dog owner ptr
 * Return: ptr to new intance of dog struct (dog_t), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len_name, len_own, k;

	dog = malloc(sizeof(dog_t));
	if (!dog || !owner || !name)
		return (NULL);

	len_name = (int)strlen(name);
	len_own = (int)strlen(owner);
	dog->name = malloc(sizeof(char) * (len_name + 1));
	dog->owner = malloc(sizeof(char) * (len_own + 1));

	if (!dog->name || !dog->owner)
	{
		free(dog->name), free(dog->owner), free(dog);
		return (NULL);
	}

	for (k = 0; k < len_name; k++)
		*(dog->name + k) = *(name + k), *(dog->name + k) = '\0';
	for (k = 0; k < len_own; k++)
		*(dog->owner + k) = *(owner + k), *(dog->owner + k) = '\0';
	dog->age = age;

	return (dog);
}
