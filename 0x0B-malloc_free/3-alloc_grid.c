#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2D array of ints
 * @width: an integer representing distance
 * @height: an integer representing distance
 * Return: NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int i, j, k, l;
	int **ptr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	else
	{
		ptr = (int **) malloc(height * sizeof(int *));

		if (!ptr)
		{
			free(ptr);
			return (NULL);
		}
		for (i = 0; i < height; i++)
		{
			ptr[i] = (int *) malloc(width * sizeof(int));
			if (!ptr[i])
			{
				for (j = 0; j <= i; j++)
					free(ptr[j]);
				free(ptr);
				return (NULL);
			}
		}
		for (k = 0; k < height; k++)
		{
			for (l = 0; l < width; l++)
			{
				ptr[k][l] = 0;
			}
		}
		return (ptr);
	}
}
