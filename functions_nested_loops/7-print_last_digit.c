#include "main.h"

/**
 * print_last_digit - print last digit
 * @n: int to print lst digit
 * Return: last digit
 */

int print_last_digit(int n)
{
	if (n < 0 && n > -10)
	{
		n = n * -1;
		_putchar(n + '0');
	}
	else if (n <= -10)
	{
		n = n % 10 * -1;
		_putchar(n + '0');
	}
	else if (n < 10)
	{
		_putchar(n + '0');
	}
	else
	{
		_putchar(n % 10 + '0');
		n = n % 10;
	}
	return (n);
}
