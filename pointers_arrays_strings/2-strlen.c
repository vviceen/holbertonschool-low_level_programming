#include "main.h"
/**
 * int_strlen - returns the length of a string
 * return: 'i'
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++);
	return (i);
}
