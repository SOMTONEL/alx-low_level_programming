#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory to variable
 * @b: an integer.
 * Return: Nothing.
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	else
	{
		return (ptr);
	}
}
