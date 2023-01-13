#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

/**
 * array_range - creates array
 * @min: minimum
 * @max: maximum
 * Return: array
 */

int *array_range(int min, int max)
{
	int *ptr, i = 0, j = min;

	if (min > max)
		return (0);
	ptr = malloc((max - min + 1) * sizeof(int));

	if (!ptr)
		return (0);
	while (i <= max - min)
		ptr[i++] = j++;
	return (ptr);
}
