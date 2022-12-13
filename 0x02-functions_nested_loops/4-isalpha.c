#include "main.h"

/**
 * _isalpha - 'checks for lowercase and uppercase letters'
 *
 * @c: character
 *
 * Return: 0 if c is not lowercase
 */

int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	return (0);
}
