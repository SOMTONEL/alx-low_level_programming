#include "main.h"

/**
 * swap_int - swaps the value of two integers
 *
 * @*a, @*b: random pointers
 *
 * @a: integer.
 * @b: integer.
 *
 * Return: nothing.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
