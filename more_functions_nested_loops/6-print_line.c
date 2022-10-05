#include "main.h"
/**
 * print_line - checks for digit.
 * @n: number of '_'
 * Return: draes a straight line in terminal
 */

void print_line(int n)
{
	if (n > 0)
	{
		for (; n > 0; n--)
		{
			_putchar ('_');
		}
		_putchar ('\n');
	}
	else
		_putchar ('\n');
}
