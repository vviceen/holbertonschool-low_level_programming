#ifndef dog_h
#define dog_h
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
/**
 * struct dog - the structure that has the data of the dog.
 * @name: name the dog.
 * @age: age the dog.
 * @owner: the dog.
 */
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;
/* PROTOYPES */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
