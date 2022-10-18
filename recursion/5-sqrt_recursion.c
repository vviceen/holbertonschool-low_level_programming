#include "main.h"
/**
 * aux - auxiliar
 * @n: number
 * @i: helper
 * Return: -1
 */
int aux(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	return (aux(n, i + 1));
	if (i * i > n)
	{
		return (-1);
	}
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	aux(n, 0);
}
