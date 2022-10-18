#include "main.h"

/**
 * *_strncpy - copies the stinr pointed to by src, including null
 * @dest: destiny
 * @src: source
 * @n: bytes
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	{
		for (i = 0 ; i < n && src[i] != '\0' ; i++)
			dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
