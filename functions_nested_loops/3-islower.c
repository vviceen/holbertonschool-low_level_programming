#include "main.h"

/**
 * _islower - checks lowercase
 * @c: character to be checked
 * Return: 1 if is lower else 0
 */

int _islower(int c);
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
