#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'prints numbers'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int Le, Li;

	/* your code goes there */
	for (Le = 0; Le < 100; Le++)
	{
		for (Li = 0; Li < 100; Li++)
		{
			if (Le < Li)
			{
				putchar((Le / 10) + 48);
				putchar((Le % 10) + 48);
				putchar(' ');
				putchar((Li / 10) + 48);
				putchar((Li % 10) + 48);
				if (Le != 98 || Li != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
