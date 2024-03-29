#include "variadic_functions.h"

/**
 * print_all - prints all things
 * @format: list of argument types
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i = 0, j, k = 0;
	char *sptr;
	const char list_args[] = "cifs";

	va_start(ap, format);
	while (format && format[i])
	{
		j = 0;
		while (list_args[j])
		{
			if (format[i] == list_args[j] && k)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int)), k = 1;
				break;
			case 'i':
				printf("%d", va_arg(ap, int)), k = 1;
				break;
			case 'f':
				printf("%f", va_arg(ap, double)), k = 1;
				break;
			case 's':
				sptr = va_arg(ap, char *), k = 1;
				if (!sptr)
				{
					printf("(nil)");
					break;
				}
				printf("%s", sptr);
				break;
		} i++;
	}
	printf("\n"),	va_end(ap);
}
