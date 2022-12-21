#include "main.h"

/**
 * _strcpy - copies strings
 * @dest: destination
 * @src: this is source
 *
 * Return: returns copy
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
