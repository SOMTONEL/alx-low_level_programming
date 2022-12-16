#include "main.h"

/**
 * print_diagonal - prints diagonal
 * @n: integer
 * Return: nothing to return
 */

void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('_');
		if (i < (n - 1))
			_putchar('\n');
	}
}
