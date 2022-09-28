#include <stdio.h>

/**
 * main - "Prints the size of various types on the computer"
 *
 * Return: 0
 */

int main(void)
{
	char caracter;
	int entero;
	long int longint;
	long long int longie;
	float floaty;

	printf("Size of a char: %zu byte(s)\n", sizeof(caracter));
	printf("Size of an int: %zu byte(s)\n", sizeof(entero));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longint));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(longie));
	printf("Size of a float: %zu byte(s)\n", sizeof(floaty));
	return (0);

}
