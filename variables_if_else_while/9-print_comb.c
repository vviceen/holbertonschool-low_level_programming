#include <stdio.h>
/**
 * main - print all possible combinations of single-digit numbers with a control structure
 *
 * Return: 0
 *
 */

int main(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		putchar (n);
		if (n < 9)
		{
			putchar (',');
			putchar (' ');
		}
		
	}
	putchar ('\n');
	return (0);
}
