#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: string
 */
void print_rev(char *s)
{
	int i;
	int len;

	for (len = 0; s[len] != '\0'; len++)
	{
		i++;
	}
	for (i = (len - 1); i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
