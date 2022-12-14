#include "main.h"

/**
 * print_sign - 'prints sign of numbers'
 *
 * @n: integer
 *
 * Return: 0 if n is 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
