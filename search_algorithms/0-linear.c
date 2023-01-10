#include "main.h"
/**
 * linear_search - searches using the Linear search algorithm.
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: is the value to search for
 * Return: the first index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t j = 0;

	if (!array)
	{
		return (-1);
	}
	for (j = 0; j < size - 1; j++)
	{
		printf("Value checked array[%ld] = [%d]\n", j, array[j]);
		if (array[j] == value)
		{
			return (j);
		}
	}
	printf("Value checked array[%ld] = [%d]\n", j, array[j]);
	return (-1);
}
