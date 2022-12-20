#include "main.h"

/**
 * _strlen - returns length of a string
 *
 * @s: a character string
 * @*s: a pointer to character string
 *
 * Return: length of a string
 */
int _strlen(char *s)
{
	int L = 0;

	while (*s != '\0')
	{
		++L;
	}
	return (L);
}
