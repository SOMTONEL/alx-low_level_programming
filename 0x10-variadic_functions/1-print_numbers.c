#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line
 *
 * @separator: a char pointer to a string literal ','
 * @n: number of arguments/numbers to be printed
 *
 * Return: nothing but take not of the if
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *str;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (i < n - 1)
			if (separator)
				printf("%s", separator);
	}
	printf("\n");

	va_end(ap);
}
