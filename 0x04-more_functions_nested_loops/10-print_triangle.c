#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: an integer
 * Return: nothing
 */

void print_triangle(int size)
{
	int i = 1, S;

	while (i <= size && size > 0)
	{
		S = 0;
		while (size - 1 > S)
		{
			_putchar(' ');
			S++;
		}
		S = 0;
		while (i < S)
		{
			_putchar('#');
			S++;
		}
		_putchar('\n');
		i++;
	}
	if (i == 1)
		_putchar('\n');
}
