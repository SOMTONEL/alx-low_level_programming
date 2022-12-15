#include "main.h"

/**
 * times_table - 'prints times table of a number'
 *
 *@n: integer
 *
 * Return: 0 if n is 0
 */

void print_times_table(int n)
{
	int i, j, k;

	for (i = 0; i <= n; i++)
	{
		_putchar('0');
		for (j = 1; j <= n; j++)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			k = j * i;
			if (k < 10)
			{
				_putchar(' ');
				_putchar(' ');
			}
			else
				_putchar((k / 10) + '0');
			_putchar((k % 10) + '0');
		}
		_putchar('\n');
	}
}
