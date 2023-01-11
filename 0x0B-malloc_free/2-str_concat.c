#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates strings
 * @s1: a pointer to the first string
 * @s2: a pointer to the second string
 * Return: NULL on falure
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, k, l, m;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = 0;
	while (s1[i] != '\0')
		i++;
	j = 0;
	while (s2[j] != '\0')
		j++;

	k = i + j;

	ptr = malloc((sizeof(char) * k) + 1);

	if (ptr == NULL)
		return (NULL);

	l = 0;
	while (l < i)
	{
		ptr[l] = s1[l];
		l++;
	}
	m = 0;
	while (l <= k)
	{
		ptr[l] = s2[m];
		l++;
		m++;
	}
	return (ptr);

}
