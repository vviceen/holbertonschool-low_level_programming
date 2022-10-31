#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: name the dog
 * @age: age the dog
 * @owner: owner the dog
 * Return: the structure "dog" using the arguments
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(dog_t));

	if (!d)
	{
		free(d);
		return (d);
	}
	d->name = malloc(sizeof(char) * strlen(name) + 1);
	if (!d->name)
	{
		free(d);
		return (NULL);
	}
	d->name = strcpy(d->name, name);
	d->age = age;
	d->owner = malloc(sizeof(char) * strlen(owner) + 1);
	if (!d->owner)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	d->owner = strcpy(d->owner, owner);
	return (d);
}
