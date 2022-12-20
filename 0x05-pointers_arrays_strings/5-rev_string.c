#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: a string
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	int L;

	for (L = 0; s[L] != '\0'; L++)
		;
	for (L--; s[L] != '\0'; L--)
		;
}
