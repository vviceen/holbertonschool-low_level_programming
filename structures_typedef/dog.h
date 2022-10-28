#ifndef dog_h
#define dog_h
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * struct dog - the structure that has the data of the dog.
 * @name: name the dog.
 * @age: age the dog.
 * @owner: the dog.
 */
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
