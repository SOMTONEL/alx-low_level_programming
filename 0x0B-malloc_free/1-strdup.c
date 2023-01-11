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
	unsigned int i = 0;
	unsigned int j = 0;

	if (str == NULL)
		return (NULL);
	while (str[j])
		j++;
	ptr = (char *) malloc(sizeof(char) * (j + 1));
	if (ptr == NULL)
		return (NULL);
	while ((ptr[i] = str[i] = '\0'))
		i++;
	return (ptr);
}
