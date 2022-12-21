#include "main.h"

/**
 * puts2 - prints characters of a string
 *
 * @str: string pointer
 *
 * Return: nothing
 */
void puts2(char *str)
{
	int L;

	L = 0;
	while (str[L] != '\0')
	{
		if (L % 2 == 0)
		{
			_putchar(str[L]);
		}
		L++;
	}
	_putchar('\n');
}
