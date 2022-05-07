#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns pointer to a 2D integers array.
 *
 * @width: Width of grid.
 * @height: UHeight of grid.
 *
 * Return: Pointer to 2D array.
 *	   NULL on failure && if width or height == 0.
 */
int **alloc_grid(int width, int height)
{
	int **arr, h, w;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(sizeof(int *) * height);

	if (arr == NULL)
		return (NULL);
	h = 0;
	while (h < height)
	{
		arr[h] = malloc(sizeof(int) * width);

		if (arr[h] == NULL)
		{
			while (h >= 0)
			{
				free(arr[h]);
				h--;
			}

			free(arr);
			return (NULL);
		}
		h++;
	}

	for ( ; h < height; h++)
	{
		for (w = 0; w < width; w++)
		{
			arr[h][w] = 0;
		}
	}

	return (arr);
}
