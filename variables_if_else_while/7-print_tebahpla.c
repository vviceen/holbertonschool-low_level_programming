#include <stdio.h>
/**
 * main - print alphabet in lowercase with a control structure
 *
 * Return: 0
 *
 */

int main(void)
{
	char n;

	for (n = 'z'; n >= 'a'; n--)
	{
		putchar (n);
	}
	putchar ('\n');
	return (0);
}
