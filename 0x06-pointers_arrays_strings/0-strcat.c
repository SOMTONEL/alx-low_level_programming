#include "main.h"

/**
 * _strcat - concatenates two strings by returning a pointer to a string
 * @dest: pointer to concatenated string
 * @src: pointer to a string
 * Return: pointer to concatenated string
 */

char *_strcat(char *dest, char *src)
{
	unsigned int i = 0, dest_len = 0;

	while (dest[i++])
		dest_len++;

	for (i = 0; src[i]; i++)
		dest[dest_len++] = src[i];

	return (dest);
}
