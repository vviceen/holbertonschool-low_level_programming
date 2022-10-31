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
	d->name = malloc(strlen(name));
	if (!d->name)
	{
		free(d->name);
		return (d->name);
	}
	d->name = name;
	d->age = age;
	d->owner = malloc(strlen(owner));
	if (!d->owner)
	{
		free(d->owner);
		return (d->owner);
	}
	d->owner = owner;
	return (d);
}
