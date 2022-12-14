#include "main.h"
/**
 * *str_concat - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @s1: string 1.
 * @s2: string 2.
 * Return: cat wich is the concatenation of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *cat;
	int l;
	int j;
	int i;
	int k;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (l = 0; s1[l] != '\0'; l++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	cat = malloc(((l + j) + 1) * sizeof(char));

	if (cat == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		cat[i] = s1[i];
	}
	for (k = 0; s2[k] != '\0'; k++)
	{
		cat[i] = s2[k];
		i++;
	}
	return (cat);
}
