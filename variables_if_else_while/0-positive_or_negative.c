#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assign a random number to the variable "n"
 *
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if( n > 0 )
	{
		printf("%n is positive\n",n);
		return (0);
	}
	if( n = 0 )
	{
		printf("%n is zero\n",n);
		return (0);
	}
	if( n < 0 )
	{
		printf("%n is negative\n",n);
		return (0);
	}
	return (0);
}
