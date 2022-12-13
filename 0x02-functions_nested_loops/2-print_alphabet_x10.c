#include "main.h"

/**
 * print_alphabet_x10 - 'prints alphabet 10x'
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	char D = 'a';
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		for (D = 'a'; D <= 'z'; D++)
		{
			_putchar(D);
		}
	}
	_putchar('\n');
}
