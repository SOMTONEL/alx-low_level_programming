#include "main.h"

/**
 * _atoi - Convert string to an integer.
 * @s: Pointer to a character string.
 *
 * Return: nothing.
 */

int _atoi(char *s)
{
	int L;
	unsigned int M;
	char *temp;

	temp = s;
	M = 0;
	L = 1;
	while (*temp != '\0' && (*temp < '0' || *temp > '9'))
	{
		if (*temp == '-')
			L *= -1;
		temp++;
	}
	if (*temp != '\0')
	{
		do {
			M = M * 10 + (*temp - '0');
			temp++;
		} while (*temp >= '0' && *temp <= '9');
	}
	return (M * L);
}
