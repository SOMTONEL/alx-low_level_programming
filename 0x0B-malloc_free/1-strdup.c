#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string
 * @str: is the pointer that is being mapped to pointer in called function
 * Return: NULL if pointer is empty
 */

char *_strdup(char *str)
{
	char *ptr;
	unsigned int i, j;

	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	ptr = malloc(sizeof(char) * (i + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < i; j++)
	{
		ptr[j] = str[j];
	}
	ptr[i] = '\0';
	return (ptr);
}
