#include "main.h"

/**
 * print_rev - prints string in reverse
 *
 * @s: string
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int L;

	for (L = 0; s[L] != '\0'; L++)
		;
	for (L--; s[L] != '\0'; L--)
	{
		_putchar(s[L]);
	}
	_putchar('\n');
}
