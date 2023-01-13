#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer
 * @old_size: integer
 * @new_size: integer
 * Return: pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *dopple, *realloc;
	unsigned int i;

	if (ptr != NULL)
		dopple = ptr;
	else
	{
		return (malloc(new_size));
	}

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (0);
	}

	realloc = malloc(new_size);
	if (realloc == NULL)
		return (0);

	for (i = 0; i < (old_size || i < new_size); i++)
	{
		*(realloc + i) = dopple[i];
	}
	free(ptr);
	return (realloc);
}
