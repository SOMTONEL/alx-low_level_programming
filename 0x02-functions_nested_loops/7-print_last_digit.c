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

	if (r < 0)
	{
		r *= -1;
		_putchar(r + '0');
		return (r);
	}
	_putchar(r + '0');
	return (r);
}
