#ifndef function_pointers_h
#define function_pointers_h

/* LIBRARIES */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/* PROTOTYPES */

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif
