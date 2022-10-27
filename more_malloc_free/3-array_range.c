#include "main.h"
/**
 * *array_range - creates an array of integers.
 * @min: all the values from min.
 * @max: all the vales from max.
 * Return: fall NULL, successful ptr.
 */
int *array_range(int min, int max)
{
	int *ptr = NULL;
	int i;
	int n = (max - min + 1);

	if (min > max)
	{
		return (ptr);
	}
	ptr = malloc(n);
	if (!ptr)
	{
		return (ptr);
	}
	for (i = 0; i < n; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}

