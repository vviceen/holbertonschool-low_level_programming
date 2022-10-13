#include "main.h"

/**
 * *leet - encodes a string into 1337
 * @s: String to be encoded
 * Return: Encoded string
 */

char *leet(char *s)
{
	int i;
	int j;
	char s2[5] = {'a', 'e', 'o', 't', 'l'};
	char s3[5] = {'4', '3', '0', '7', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{

		for (j = 0; j < 5; j++)
		{
			if (s[i] == s2[j] || s[i] == s2[j] - 32)
			{
				s[i] = s3[j];
			}

		}

	}
	return (s);
}
