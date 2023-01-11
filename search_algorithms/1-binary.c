#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: a pointer to the first element of the array to search in
 * @size:  the number of elements in array
 * @value: the value to search for
 * Return: the index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l = 0, r = size - 1, pivot, i;

	if (!array)
	{
		return (-1);
	}
	while (l <= r)
	{
		pivot = (l + r) / 2;
		printf("Searching in array: ");
		for (i = l; i <= r; i++)
		{
			if (i < r)
			{
				printf("%d, ", array[i]);
			}
			else
				printf("%d", array[i]);
		}
		printf("\n");
		if (array[pivot] == value)
			return (pivot);
		if (array[pivot] < value)
			l = pivot + 1;
		else
			r = pivot - 1;
	}
	return (-1);
}
