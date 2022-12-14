#include "main.h"

/**
 * times_table - 'prints times table of a number'
 *
 *
 * Return: 0 if n is 0
 */

void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 0; i++)
	{
		_putchar('0');
		for (j = 0; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');
			k = j * i;
			if (k < 10)
				_putchar(' ');
			else
				_putchar((k / 10) + '0');
			_putchar((k % 10) + '0');
		}
		_putchar('\n');
	}
}
