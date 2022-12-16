#include "main.h"

/**
 * print_most_numbers - prints most numbers
 *
 * Return: nothing to return
 */

void print_most_numbers(void)
{
	char i = '0';

	if (!((i == '2') && (i == '4')))
	{
		for (i = '0'; i <= '9'; i++)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
