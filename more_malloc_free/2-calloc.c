#include "main.h"
/**
 * *_calloc - allocates memory for an array, using malloc.
 * @nmemb: number of elements.
 * @size: 
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int t = nmemb * size;
	unsigned int i;
	char *ptr = NULL;

	if (nmemb == 0 || size == 0)
	{
		return (ptr);
	}
	ptr = malloc(t);

	if (!ptr)
	{
		return (ptr);
	}
	for (i = 0; i < t; i++)
	{
		s[i] = 0;
	}
	return (ptr);
}
