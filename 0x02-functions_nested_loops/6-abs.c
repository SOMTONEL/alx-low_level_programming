#include "main.h"

/**
 * _abs - 'prints absolute value of a number'
 *
 * @n: integer
 *
 * Return: 0 if n is 0
 */

int _abs(int n)
{
	if (n > 0)
	{
		_putchar(n);
	}
	else if (n < 0)
	{
		n /= -1;
		_putchar(n);
	}
	else
	{
		_putchar('0');
	}
	return (0);
}
