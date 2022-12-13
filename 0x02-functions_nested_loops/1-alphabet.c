#include "main.h"
/**
 * print_alphabet - Entry point
 *
 * Description: 'prints the alphabet'
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char D = 'a';

	for (D = 'a'; D <= 'z'; D++)
	{
		_putchar(D);
	}

	_putchar('\n');
}
