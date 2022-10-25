#include "main.h"
/**
 * *malloc_checked - malloc check
 * @b: to be malloc
 * Return: pointer a.
 */
void *malloc_checked(unsigned int b)
{
	char *a;

	a = malloc(b);
	if (a == NULL)
	{
		exit(98);
	}
	return (a);
}
