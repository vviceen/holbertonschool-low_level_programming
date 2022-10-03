#include "main.h"

/**
 * _isalpha - checks lowercase & uppercase
 * @c: character to be checked
 * Return: 1 if is lower else 0
 */

int _islower(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
