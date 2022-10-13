#include "main.h"
/**
 * *_strchr - locates a character in a string
 * @s: string
 * @c: character
 * Return: first ocurrence or NULL if not found char
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (c == s[i])
		{
			return (&s[i]);
		}
	}
	return (NULL);
}
