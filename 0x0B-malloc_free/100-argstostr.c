#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates arguments of the code
 * @ac: an integer
 * @av: pointer to an array
 * Return: NULL on failure
 */

char *argstostr(int ac, char **av)
{
	int i, j, k, l;
	char *aptr;

	l = 0;
	k = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			l++;
			j++;
		}
		l++;
		i++;
	}
	aptr = malloc((sizeof(char) * l) + 1);
	if (aptr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			aptr[k] = av[i][j];
			j++;
			k++;
		}
		aptr[k] = '\n';
		k++;
		i++;
	}
	aptr[k] = '\0';
	return (aptr);
}
