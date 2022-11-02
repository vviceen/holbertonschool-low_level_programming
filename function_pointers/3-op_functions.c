#include "3-calc.h"
/**
 * op_add - adds a to b
 * @a: int a
 * @b: int b
 * Return: returns the sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subs a to b
 * @a: int a
 * @b: int b
 * Return: returns the difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies a by b
 * @a: int a
 * @b: int b
 * Return: returns the product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides a by b.
 * @a: int a
 * @b: int b
 * Return: returns the result of the division of a by b
 */
int op_div(int a, int b)
{
	if (a == 0 || b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - modulize a by b.
 * @a: int a
 * @b: int b
 * Return: returns the remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	if (a == 0 || b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
