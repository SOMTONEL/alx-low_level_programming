#include "main.h"

/**
 * _strcat - concatenates two strings by returning a pointer to a string
 * @dest: pointer to concatenated string
 * @src: pointer to a string
 * Return: pointer to concatenated string
 */

char *_strcat(char *dest, char *src)
{
	unsigned int i = 0, j = 0;
	char *str = (char *)malloc(200);

	while (dest[i] != '\0')
	{
		str[j] = dest[i];
		i++;
		j++;
	}

	i = 0;
	while (src[i] != '\0')
	{
		str[j] = src[i];
		i++;
		j++;
	}
	str[j] = '\0';
	return (str);
}
