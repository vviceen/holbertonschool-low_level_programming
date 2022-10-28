#include "dog.h"
/**
 * init_dog - initialize the dog structure
 * @d: dog
 * @name: name the dog
 * @age: age the dog
 * @owner: owner the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
