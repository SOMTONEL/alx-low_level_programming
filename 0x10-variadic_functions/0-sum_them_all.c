#include "variadic_functions.h"

/**
 * sum_them_all - sums up all arguments
 *
 * @n: number of arguments
 *
 * Return: '0' if n is 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list ap;

	va_start(ap, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}

	va_end(ap);
	return (sum);
}
