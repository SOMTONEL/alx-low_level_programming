#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string
 * @str: is the pointer that is being mapped to pointer in called function
 * Return: NULL if pointer is empty
 */

char *_strdup(char *str)
{
	unsigned int i = 0;
	unsigned int j = 0;
	char *ptr = (char *) malloc(i * sizeof(char));

	while (str[i] != '\0')
	{
		i++;
	}

	while (ptr[j] != '\0')
	{
		j++;
	}

	if (str == NULL)
	{
		return (NULL);
	}
	else if (j < i)
	{
		return (NULL);
	}
	else
	{
		ptr = str;
	}
	return (ptr);
}
