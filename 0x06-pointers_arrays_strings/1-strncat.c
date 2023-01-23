#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: the string to be appended upon
 * @src: the string to be concatenated
 * @n: number of bytes from src to be appended to dest
 * Return: A pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, dest_len = 0;

	while (dest[i++])
		dest_len++;

	for (i = 0; src[i] && i < n; i++)
		dest[dest_len++] = src[i];

	return (dest);
}
