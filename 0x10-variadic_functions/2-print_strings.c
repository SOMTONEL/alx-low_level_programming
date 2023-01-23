#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by new line
 *
 * @separator: character string pointer to ','
 * @n: number strings to be printed
 *
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *sptr;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		sptr = va_arg(ap, char*);

		if (sptr)
			printf("%s", sptr);
		else
			printf("(nil)");

		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
