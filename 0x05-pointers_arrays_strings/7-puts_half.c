#include "main.h"

/**
 * puts_half - prints second half of a string
 *
 * @str: a pointer to a string
 *
 * Return: nothing.
 */
void puts_half(char *str)
{
	int L, M;

	for (L = 0; str[L] != '\0'; L++)
	{
		if (L % 2 == 0)
		{
			M = 0;
			while (L / 2 < M)
			{
				_putchar(str[M]);
				M++;
			}
		}
		else
		{
			M = 0;
			while ((L - 1) / 2 < M)
			{
				_putchar(str[M]);
				M++;
			}
		}
	}
	_putchar('\n');
}
