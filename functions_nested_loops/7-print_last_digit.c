#include "main.h"

/**
 * print_last_digit - print last digit
 * @n: int to print lst digit
 * Return: last digit
 */

int print_last_digit(int n)
{
	int d;

	if (n < 0)
	{
		n = -n;
		d = n % 10;
	}
	if (d < 0)
	{
		d = -d;
	}
	_putchar (d + '0');
	return (d);
}
