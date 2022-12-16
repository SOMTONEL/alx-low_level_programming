#include "main.h"

/**
 * _isdigit - 'checks for digits within range of 0 - 9'
 *
 * @c: integer
 *
 * Return: 1 or 0 depending on condition
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
