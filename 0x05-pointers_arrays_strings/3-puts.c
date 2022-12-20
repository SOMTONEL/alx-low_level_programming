#include "main.h"

/**
 * _puts - prints characters in a string
 *
 * @str: character string
 *
 * Return: nothing
 */
void _puts(char *str)
{
	int L;

	for (L = 0; str[L] != '\0'; L++)
	{
		_putchar(str[L]);
	}
	_putchar('\n');
}
