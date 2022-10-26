#include "main.h"
/**
 * *string_nconcat - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @s1: string 1.
 * @s2: string 2.
 * @n: number of bytes
 * Return: cat wich is the concatenation of s1 and s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int j;
	int i;
	unsigned int k;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (j = 0; s2[j] != '\0' && j <= n; j++)
		;
	ptr = malloc((sizeof(s1) + j + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[i] = s1[i];
	}
	for (k = 0; s2[k] != '\0' && k < n; k++)
	{
		ptr[i] = s2[k];
		i++;
	}
	return (ptr);
}
