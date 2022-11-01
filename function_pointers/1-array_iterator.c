#include "function_pointers.h"
/**
 * array_iterator - array iterator
 * @array: array
 * @size: size
 * @action: function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	while (array[i] && action && i < (int)size)
	{
		action(array[i]);
		i++;
	}
}
