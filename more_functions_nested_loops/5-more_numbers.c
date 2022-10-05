#include "main.h"
/**
 * more_numbers - prints 10 times the number, from 0 to 14
 * Return: 01234567891011121314 * 10 lines
 */

void more_numbers(void)
	int m = 0;
	int n;

	while (m <= 9)
	{
		for (n = 0 ; n <= 14 ; n++)
		{
			if (n > 9)
			{
				_putchar ((n / 10) + '0');
			}
			_putchar ((n % 10) + '0');
		}
	m++;
	_putchar ('\n');
	}
}
