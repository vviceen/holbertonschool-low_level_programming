#include <stdio.h>
/**
 * main - fizz buzz interview question
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (((n%3)||(n%5))== 0)
		{
			printf("FizzBuzz");
		}
		else if ((n%3)== 0)
		{
			printf("Fizz");
		}
		else if ((n%5)== 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%i", n);
		}
		if (n < 100)
		{
			printf(" ");
		}
	}
	return (0);
}
