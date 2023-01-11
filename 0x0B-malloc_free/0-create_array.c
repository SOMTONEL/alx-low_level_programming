#include "main.h"
#include <stdlib.h>

/**
 * *create_array - allocates memory and initializes an array and its contents
 * @c: a character
 * @size: size of integer
 * Return: NULL
 */

char *create_array(unsigned int size, char c)
{
	char *ptr = (char *) malloc(size * sizeof(c));
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	else if (ptr == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			ptr[i] = c;
		}
	}
	return (ptr);
}
