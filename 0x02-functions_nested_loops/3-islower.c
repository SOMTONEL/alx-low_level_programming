#include "main.h"

/**
 * _islower - 'checks for lowercase letters'
 *
 * @c: character
 *
 * Return: 0 if c is not lowercasie
 */

int _islower(int c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	return (0);
}
