#include "main.h"

/**
 * puts_half - do the thing 
 * @str: string
 */

void puts_half(char *str)
{
	int i;

	int aux;

	for (i = 0 ; str[i] != '\0'; i++)
		;
	if (i % 2 == 0)
	{
		aux = i / 2;
		for (; aux < i; aux++)
		{
			_putchar(str[aux]);
		}
	}
	else
	{
		aux = (i - 1) / 2;
		for (aux++; aux < i; aux++)
		{
			_putchar(str[aux]);
		}
	}
	_putchar(10);
}
