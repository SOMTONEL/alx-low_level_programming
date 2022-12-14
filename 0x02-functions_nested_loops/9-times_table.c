#include "main.h"

/**
 * jack_bauer - 'prints last digit of a number'
 *
 *
 * Return: 0 if n is 0
 */

void jack_bauer(void)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i >= 2 && j >= 4)
				continue;
			for (k = 0; k < 6; k++)
			{
				for (l = 0; l < 10; l++)
				{
					_putchar(i % 10 + '0');
					_putchar(j % 10 + '0');
					_putchar(':');
					_putchar(k % 10 + '0');
					_putchar(l % 10 + '0');
					_putchar('\n');
				}
			}

		}
	}

}
