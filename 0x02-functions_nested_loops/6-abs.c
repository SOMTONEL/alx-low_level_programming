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
	int temp;

	if (n < 0)
	{
		temp = n * -1;
		return (temp);
	}
	else
	{
		return (n);
	}
}
