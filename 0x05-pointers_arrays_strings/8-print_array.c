#include "main.h"
#include <stdio.h>

/**
 * print_array - prints elements of array
 *
 * @n: an integer
 * @a: a pointer to an array
 *
 * Return: nothing.
 */
void print_array(int *a, int n)
{
	int L;

	for (L = 0; n >= L; L++)
	{
		if (n > L)
		{
			printf("%d", a[L]);
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
}
