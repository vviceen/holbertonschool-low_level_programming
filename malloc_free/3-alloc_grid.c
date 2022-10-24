#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the grid
 * @height: height of the grid
 * Return: NULL, point
 */

int **alloc_grid(int width, int height)
{
	int n, i;
	int **point;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}

	point = malloc(sizeof(*point) * height);

	if (point == NULL)
	{
		return (NULL);
	}

	for (n = 0 ; n < height ; n++)
	{
		point[n] = malloc(sizeof(int) * width);

		if (point[n] == NULL)
		{
			while (n >= 0)
			{
				free(point[n]);
				n--;
			}
			free(point);
			return (NULL);
		}
		else
		{
			for (i = 0 ; point[n][i] ; i++)
			{
				point[n][i] = 0;
			}
		}
	}
	return (point);
}
