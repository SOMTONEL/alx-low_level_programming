#include "main.h"

/**
 * print_last_digit - 'prints last digit of a number'
 *
 * @n: integer
 *
 * Return: 0 if n is 0
 */

int print_last_digit(int n)
{
	int r = n % 10;
	int i = 0;

	for (i = 0; i < 2; i++)
		_putchar(r);
	return (0);
}
