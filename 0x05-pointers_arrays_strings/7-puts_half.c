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

	L = 0;
	while (str[L] != '\0')
		L++;

	M = L / 2;

	if (L % 2 == 1)
		M++;

	while (M < L)
	{
		_putchar(str[M]);
		M++;
	}
	_putchar('\n');
}
