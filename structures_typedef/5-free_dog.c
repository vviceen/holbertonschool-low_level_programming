#include "dog.h"
/**
 * free_dog - frees the structure
 * @d: a pointer to structure d
 */
void free_dog(dog_t *d)
{
	if (!d)
	{
		return;
	}
	free(d->name);
	free(d->owner);
	free(d);
}
