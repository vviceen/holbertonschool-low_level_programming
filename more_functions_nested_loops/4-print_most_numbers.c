#include "main.h"
/**
 * print_most_numbers - checks for digit.
 * Return: prints numbers from 0 to 9, do not print 2 & 4
 */

void print_most_numbers(void)
{
	char n;

	for (n = 48; n <= 57; n++)
	{
		if (n != 50 && n != 52)
		{
			_putchar (n);
		}
	}
	_putchar ('\n');
}
